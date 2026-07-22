/*
 * SPDX-FileCopyrightText: 2014 Advanced Micro Devices, Inc.
 * SPDX-License-Identifier: MIT
*/

#ifndef _UTIL_MATH_H_
#define _UTIL_MATH_H_

#include <stdint.h>

#define MIN2( A, B )   ( (A)<(B) ? (A) : (B) )
#define MAX2( A, B )   ( (A)>(B) ? (A) : (B) )
#define MAX3( A, B, C ) ((A) > (B) ? MAX2(A, C) : MAX2(B, C))

#define __align_mask(value, mask)  (((value) + (mask)) & ~(mask))
#define ALIGN(value, alignment)    __align_mask(value, (__typeof__(value))((alignment) - 1))

static inline unsigned
util_last_bit64(uint64_t u)
{
#if defined(HAVE___BUILTIN_CLZLL)
	return u == 0 ? 0 : 64 - __builtin_clzll(u);
#elif defined(_MSC_VER) && (_M_AMD64 || _M_ARM64 || _M_IA64)
	unsigned long index;
	if (_BitScanReverse64(&index, u))
		return index + 1;
	else
		return 0;
#else
	unsigned r = 0;
	while (u) {
		r++;
		u >>= 1;
	}
	return r;
#endif
}

#endif /*_UTIL_MATH_H_*/
