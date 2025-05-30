/*
 * Copyright 2008 Tungsten Graphics
 *   Jakob Bornecrantz <jakob@tungstengraphics.com>
 * Copyright 2008 Intel Corporation
 *   Jesse Barnes <jesse.barnes@intel.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/*
 * This fairly simple test program dumps output in a similar format to the
 * "xrandr" tool everyone knows & loves.  It's necessarily slightly different
 * since the kernel separates outputs into encoder and connector structures,
 * each with their own unique ID.  The program also allows test testing of the
 * memory management and mode setting APIs by allowing the user to specify a
 * connector and mode to use for mode setting.  If all works as expected, a
 * blue background should be painted on the monitor attached to the specified
 * connector after the selected mode is set.
 *
 * TODO: use cairo to write the mode info on the selected output once
 *       the mode has been programmed, along with possible test patterns.
 */

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#include "xf86drm.h"
#include "xf86drmMode.h"

#include "common.h"

struct type_name {
	unsigned int type;
	const char *name;
};

static const char *util_lookup_type_name(unsigned int type,
					 const struct type_name *table,
					 unsigned int count)
{
	unsigned int i;

	for (i = 0; i < count; i++)
		if (table[i].type == type)
			return table[i].name;

	return NULL;
}

static const struct type_name encoder_type_names[] = {
	{ DRM_MODE_ENCODER_NONE, "none" },
	{ DRM_MODE_ENCODER_DAC, "DAC" },
	{ DRM_MODE_ENCODER_TMDS, "TMDS" },
	{ DRM_MODE_ENCODER_LVDS, "LVDS" },
	{ DRM_MODE_ENCODER_TVDAC, "TVDAC" },
	{ DRM_MODE_ENCODER_VIRTUAL, "Virtual" },
	{ DRM_MODE_ENCODER_DSI, "DSI" },
	{ DRM_MODE_ENCODER_DPMST, "DPMST" },
	{ DRM_MODE_ENCODER_DPI, "DPI" },
};

const char *util_lookup_encoder_type_name(unsigned int type)
{
	return util_lookup_type_name(type, encoder_type_names,
				     ARRAY_SIZE(encoder_type_names));
}

static const struct type_name connector_status_names[] = {
	{ DRM_MODE_CONNECTED, "connected" },
	{ DRM_MODE_DISCONNECTED, "disconnected" },
	{ DRM_MODE_UNKNOWNCONNECTION, "unknown" },
};

const char *util_lookup_connector_status_name(unsigned int status)
{
	return util_lookup_type_name(status, connector_status_names,
				     ARRAY_SIZE(connector_status_names));
}

int util_open(const char *device, const char *module)
{
	int fd = -1;
	drmVersionPtr version;

	if (module || device) {
		fd = drmOpen(module, device);
		if (fd < 0) {
			fprintf(stderr, "failed to open device '%s' with busid '%s': %s\n",
				module, device, strerror(errno));
			return -errno;
		}
	} else {
		unsigned int i;
		drmDevicePtr devices[64];
		int num_devices = drmGetDevices2(0, devices, ARRAY_SIZE(devices));
		if (num_devices < 0) {
			fprintf(stderr, "drmGetDevices2() failed with %s\n", strerror(num_devices));
			return num_devices;
		}

		for (i = 0; i < num_devices; i++) {
			drmDevicePtr device = devices[i];
			// Select only primary nodes
			if ((device->available_nodes & 1 << DRM_NODE_PRIMARY) == 0)
				continue;

			printf("trying to open device '%s'... ", device->nodes[DRM_NODE_PRIMARY]);
			fd = open(device->nodes[DRM_NODE_PRIMARY], O_RDWR | O_CLOEXEC);

			if (fd < 0) {
				printf("failed\n");
			} else if (!drmIsKMS(fd)) {
				printf("is not a KMS device\n");
				close(fd);
				fd = -1;
			} else {
				printf("done\n");
				break;
			}
		}

		if (fd < 0) {
			fprintf(stderr, "no device found\n");
			return -ENODEV;
		}
	}

	version = drmGetVersion(fd);
	printf("opened device `%s` on driver `%s` (version %d.%d.%d at %s)\n",
	       version->desc,
	       version->name,
	       version->version_major,
	       version->version_minor,
	       version->version_patchlevel,
	       version->date);
	drmFreeVersion(version);

	return fd;
}
