/*
 * Copyright 2022 Advanced Micro Devices, Inc.
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
*/

#ifndef _shader_code_gfx11_h_
#define _shader_code_gfx11_h_

static const uint32_t bufferclear_cs_shader_gfx11[] = {
	0xB0802006, 0xBF840003, 0x360000FF, 0x000003FF,
	0x7E020205, 0x7E040206, 0x7E060207, 0xBF870004,
	0xD6460004, 0x04010C08, 0x7E000204, 0xE01C0000,
	0x80800004, 0xBFB60003, 0xBFB00000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000
};

static const struct reg_info bufferclear_cs_shader_registers_gfx11[] = {
	{0x2e12, 0x600C0041},	//{ mmCOMPUTE_PGM_RSRC1,	  0x600C0041 },
	{0x2e13, 0x00000090},	//{ mmCOMPUTE_PGM_RSRC2,	  0x00000090 },
	{0x2e07, 0x00000040},	//{ mmCOMPUTE_NUM_THREAD_X, 0x00000040 },
	{0x2e08, 0x00000001},	//{ mmCOMPUTE_NUM_THREAD_Y, 0x00000001 },
	{0x2e09, 0x00000001},	//{ mmCOMPUTE_NUM_THREAD_Z, 0x00000001 }
};

static const uint32_t buffercopy_cs_shader_gfx11[] = {
	0xB0802006, 0xBF840003, 0x360000FF, 0x000003FF,
	0xBF870001, 0xD6460001, 0x04010C08, 0xE00C0000,
	0x80800201, 0xBF8903F7, 0xE01C0000, 0x80810201,
	0xBFB60003, 0xBFB00000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000
};

static const uint32_t ps_const_shader_gfx11[] = {
    0xB0802006, 0xBF840003, 0x7E000200, 0x7E020201,
    0x7E040202, 0x7E060203, 0x5E000300, 0x5E020702,
    0xBF800000, 0xBF800000, 0xF8000803, 0x00000100,
    0xBFB00000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000
};

#define ps_const_shader_patchinfo_code_size_gfx11 6

static const uint32_t ps_const_shader_patchinfo_code_gfx11[][10][6] = {
	{{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000890, 0x00000000 },  // SI_EXPORT_FMT_ZERO
	{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000801, 0x00000000 },  // SI_EXPORT_FMT_32_R
	{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_32_GR
	{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000300 },  // SI_EXPORT_FMT_32_AR
	{ 0x5E000300, 0x5E020702, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_FP16_ABGR
	{ 0xD7220000, 0x00020300, 0xD7220001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_UNORM16_ABGR
	{ 0xD7210000, 0x00020300, 0xD7210001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_SNORM16_ABGR
	{ 0xD7230000, 0x00020300, 0xD7230001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_uint32_t16_ABGR
	{ 0xD7240000, 0x00020300, 0xD7240001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_SINT16_ABGR
	{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF800080F, 0x03020100 }   // SI_EXPORT_FMT_32_ABGR
	}
};

static const uint32_t ps_const_shader_patchinfo_offset_gfx11[] = {
	0x00000006
};

#define ps_const_num_sh_registers_gfx11 2

static const struct reg_info ps_const_sh_registers_gfx11[] = {
	{0x2C0A, 0x020C0000}, //{ mmSPI_SHADER_PGM_RSRC1_PS, 0x020C0000 },
	{0x2C0B, 0x00000008}, //{ mmSPI_SHADER_PGM_RSRC2_PS, 0x00000008 }
};

static const struct reg_info ps_const_context_registers_gfx11[] = {
	{0xA1B4, 0x00000002 }, //{ mmSPI_PS_INPUT_ADDR,       0x00000002 },
	{0xA1B6, 0x00000000 }, //{ mmSPI_PS_IN_CONTROL,       0x00000000 },
	{0xA08F, 0x0000000F }, //{ mmCB_SHADER_MASK,          0x0000000F },
	{0xA203, 0x00000010 }, //{ mmDB_SHADER_CONTROL,       0x00000010 },
	{0xA1C4, 0x00000000 }, //{ mmSPI_SHADER_Z_FORMAT,     0x00000000 },
	{0xA1B8, 0x00000000 }, //{ mmSPI_BARYC_CNTL,          0x00000000 /* Always 0 for now */},
	{0xA1C5, 0x00000004 }, //{ mmSPI_SHADER_COL_FORMAT,   0x00000004 /* SI_EXPORT_FMT_FP16_ABGR */ }
};

#define ps_const_num_context_registers_gfx11 7

static const uint32_t ps_tex_shader_gfx11[] =
{
    0xB0802006, 0xBF840003, 0xBEFD000C, 0xBE8E017E,
    0xBEFE1D7E, 0xCE000003, 0xCE000102, 0xCD000104,
    0x040E0103, 0xCD000000, 0x040A0102, 0xBF870112,
    0xCD010703, 0x04120303, 0xCD010700, 0x04020302,
    0x8BFE0E7E, 0xF06C0F05, 0x08000003, 0x00000000,
    0xBEFE010E, 0xBF8903F7, 0x5E000300, 0x5E020702,
    0xBF800000, 0xBF800000, 0xF8000803, 0x00000100,
    0xBFB00000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
    0xBF9F0000
};

static const uint32_t ps_tex_shader_patchinfo_offset_gfx11[] =
{
    0x00000016
};

// Denotes the Patch Info Code Length
#define ps_tex_shader_patchinfo_code_size_gfx11 6

static const uint32_t ps_tex_shader_patchinfo_code_gfx11[][10][6] =
{
    {{ 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000890, 0x00000000 },  // SI_EXPORT_FMT_ZERO
     { 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000801, 0x00000000 },  // SI_EXPORT_FMT_32_R
     { 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_32_GR
     { 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000300 },  // SI_EXPORT_FMT_32_AR
     { 0x5E000300, 0x5E020702, 0xBF800000, 0xBF800000, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_FP16_ABGR
     { 0xD7220000, 0x00020300, 0xD7220001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_UNORM16_ABGR
     { 0xD7210000, 0x00020300, 0xD7210001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_SNORM16_ABGR
     { 0xD7230000, 0x00020300, 0xD7230001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_uint32_t16_ABGR
     { 0xD7240000, 0x00020300, 0xD7240001, 0x00020702, 0xF8000803, 0x00000100 },  // SI_EXPORT_FMT_SINT16_ABGR
     { 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000, 0xF800080F, 0x03020100 }   // SI_EXPORT_FMT_32_ABGR
    }
};
// Holds Sh Register Information
static const struct reg_info ps_tex_sh_registers_gfx11[] =
{
    {0x2C0A, 0x020C0081 }, //{ mmSPI_SHADER_PGM_RSRC1_PS, 0x020C0081 },
    {0x2C0B, 0x00000018 } //{ mmSPI_SHADER_PGM_RSRC2_PS, 0x00000018 }
};

#define ps_tex_num_sh_registers_gfx11 2

// Holds Context Register Information
static const struct reg_info ps_tex_context_registers_gfx11[] =
{
    {0xA1B4, 0x00000002 }, //{ mmSPI_PS_INPUT_ADDR,       0x00000002 },
    {0xA1B6, 0x00000001 }, //{ mmSPI_PS_IN_CONTROL,       0x00000001 },
    {0xA08F, 0x0000000F }, //{ mmCB_SHADER_MASK,          0x0000000F },
    {0xA203, 0x00000010 }, //{ mmDB_SHADER_CONTROL,       0x00000010 },
    {0xA1C4, 0x00000000 }, //{ mmSPI_SHADER_Z_FORMAT,     0x00000000 },
    {0xA1B8, 0x00000000 }, //{ mmSPI_BARYC_CNTL,          0x00000000 /* Always 0 for now */},
    {0xA1C5, 0x00000004 } //{ mmSPI_SHADER_COL_FORMAT,   0x00000004 /* SI_EXPORT_FMT_FP16_ABGR */ }
};

#define ps_tex_num_context_registers_gfx11 7

static const uint32_t vs_RectPosTexFast_shader_gfx11[] =
{
	0xB0802006, 0xBEFE01C1, 0xBF840003, 0xF408050A,
	0xF80000B0, 0xD71F0001, 0x000100C1, 0x9300FF03,
	0x00040018, 0x9301FF02, 0x0009000C, 0xBF870091,
	0xD7200001, 0x000202C1, 0xD60B0001, 0x04058000,
	0xBF870001, 0xD4490000, 0x00000301, 0xBE862100,
	0x7E040B05, 0xBFA5001C, 0x7E06020A, 0x7E08020E,
	0x7E0A020F, 0xBF8701B4, 0x060404F3, 0x7E140211,
	0x7E0E0210, 0x7C240480, 0x060404F3, 0xD5010003,
	0x01AA0608, 0xD5010004, 0x01AA080C, 0xBF870003,
	0xD4120012, 0x00010102, 0x7E04020B, 0xBEEA1F12,
	0xBF870483, 0xD5010008, 0x01AA080C, 0xD5010006,
	0x01AA0608, 0xBF870003, 0xD5010004, 0x004A0409,
	0xD5010009, 0x004A0A0D, 0xBEFE0106, 0x9302FF02,
	0x00090016, 0xBF870009, 0xD4C9007E, 0x00000501,
	0xBFA50002, 0xF8000941, 0x00000000, 0xBF89FFF0,
	0x8BFE0006, 0xD71F0000, 0x000100C1, 0xBFA50013,
	0x7E1602F2, 0x9300FF03, 0x00040018, 0x8B01FF05,
	0x00007FFF, 0xBF8704B2, 0xD7200000, 0x000200C1,
	0x7E0202F2, 0x84018901, 0x80018001, 0xBF870002,
	0xD60B0000, 0x04018000, 0xF80008CF, 0x01070406,
	0xBF89FC07, 0xE0744000, 0x01850800, 0xBFB00000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000,
	0xBF9F0000, 0xBF9F0000, 0xBF9F0000, 0xBF9F0000
};

static const struct reg_info vs_RectPosTexFast_sh_registers_gfx11[] =
{
	{0x2C8A, 0x020C00C2}, //{ mmSPI_SHADER_PGM_RSRC1_GS, 0x020C00C2 },
	{0x2C8B, 0x0008001C}, //{ mmSPI_SHADER_PGM_RSRC2_GS, 0x0008001C }
};

#define vs_RectPosTexFast_num_sh_registers_gfx11 2

// Holds Context Register Information
static const struct reg_info vs_RectPosTexFast_context_registers_gfx11[] =
{
	{0xA1B1, 0x00000000}, //{ mmSPI_VS_OUT_CONFIG, 0x00000000 },
	{0xA1C2, 0x00000001}, //{ mmSPI_SHADER_IDX_FORMAT, 0x00000001 },
	{0xA1C3, 0x00000000}, //{ mmSPI_SHADER_POS_FORMAT, 0x00000000 /* Always 0 for now */},
	{0xA2E4, 0x00000000}, //{ mmVGT_GS_INSTANCE_CNT, 0x00000000 },
	{0xA2AB, 0x00000004}, //{ mmVGT_ESGS_RING_ITEMSIZE, 0x00000004 },
	{0xA2CE, 0x00000001}, //{ mmVGT_GS_MAX_VERT_OUT, 0x00000001 }
};

#define vs_RectPosTexFast_num_context_registers_gfx11 6

static const uint32_t preamblecache_gfx11[] = {
	0xc0026900, 0x81, 0x80000000, 0x40004000, 0xc0026900, 0x8c, 0xaa99aaaa, 0x0,
	0xc0026900, 0x90, 0x80000000, 0x40004000, 0xc0026900, 0x94,  0x80000000, 0x40004000,
	0xc0026900, 0xb4, 0x0, 0x3f800000, 0xc0016900, 0x103, 0x0, 0xc0016900, 0x208, 0x0,
	0xc0016900, 0x2a1, 0x0, 0xc0016900,  0x2ad, 0x0, 0xc0016900, 0x2dc, 0x0,
	0xc0066900, 0x2de, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0xc0056900, 0x2f9, 0x5, 0x3f800000, 0x3f800000, 0x3f800000,  0x3f800000,
	0xc0046900, 0x310, 0x0, 0x3, 0x0, 0x100000, 0xc0016900, 0x349, 0x0,
	0xc0016900, 0x358, 0x0, 0xc0016900, 0x367, 0x0, 0xc0016900, 0x376,  0x0,
	0xc0016900, 0x385, 0x0, 0xc0076900, 0x1e1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0xc0026900, 0x204, 0x90000, 0x4, 0xc0016900, 0x20c, 0x0,  0xc0026900, 0x20e, 0x0, 0x0,
	0xc0016900, 0x2b2, 0x0, 0xc0026900, 0x30e, 0xffffffff, 0xffffffff,
	0xc0016900, 0x314, 0x0, 0xc0016900, 0x10a, 0x0,  0xc0016900, 0x2a6, 0x0,
	0xc0016900, 0x210, 0x0, 0xc0016900, 0x2db, 0x0, 0xc0016900, 0x2e4, 0x0,
	0xc0002f00, 0x1, 0xc0016900, 0x1, 0x0, 0xc0016900,  0x206, 0x300,
	0xc0016900, 0x212, 0x200, 0xc0016900, 0xf4, 0x0, 0xc0016900, 0x18, 0x0,
	0xc0016900, 0x1d4, 0xff, 0xc0016900, 0x2ce, 0x1, 0xc0016900, 0x2d3, 0x20001,
	0xc0016900, 0x1ff, 0x80,  0xc0016900, 0x2d5, 0x6012010, 0xc0017a00, 0x20000243, 0x0,
	0xc0017900, 0x249, 0x0, 0xc0017900, 0x24a, 0x0, 0xc0017900, 0x24b, 0x0,
	0xc0017900,  0x259, 0xffffffff, 0xc0017900, 0x25f, 0x0, 0xc0017900, 0x260, 0x0,
	0xc0017900, 0x262, 0x0, 0xc0017900, 0x444, 0x0, 0xc0017900, 0x445, 0x0,
	0xc0017600, 0x6, 0x0, 0xc0017600, 0x80, 0x0, 0xc0017600, 0xb0, 0x0,
	0xc0047600, 0xb2, 0x0, 0x0, 0x0, 0x0, 0xc0017600, 0x30, 0x0,
	0xc0047600, 0x32, 0x0, 0x0, 0x0, 0x0
};

static const uint32_t cached_cmd_gfx11[] = {
	0xc0016900, 0x0, 0x0, 0xc0026900, 0x3, 0x2a, 0x0,
	0xc0046900, 0xa, 0x0, 0x0, 0x0, 0x200020,
	0xc0016900, 0x83, 0xffff, 0xc0026900, 0x8e, 0xf, 0xf,
	0xc0056900, 0x105, 0x0, 0x0, 0x0, 0x0, 0x0,
	0xc0026900, 0x10b, 0x0, 0x0, 0xc0016900, 0x1e0, 0x0,
	0xc0036900, 0x200, 0x0, 0x10000, 0xcc0011,
	0xc0026900, 0x292, 0x20, 0x6020000,
	0xc0026900, 0x2b0, 0x0, 0x0, 0xc0016900, 0x2f8, 0x0,
	0xc0046900, 0x1d5, 0x0, 0x0, 0x0, 0x0, 0xc0016900, 0x104, 0x4a00005,
	0xc0016900, 0x1f, 0xf2a0055, 0xc0017900, 0x266, 0x4
};

#define sh_reg_base_gfx11 0x2C00
#define context_reg_base_gfx11 0xA000

#endif
