/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __VDSO_BITS_H
#define __VDSO_BITS_H

#ifdef __GENKSYMS__
/*
 * Old version of this macro to preserve the CRC signatures of some drm symbols.
 * Crazy but true...
 */
#else
#include <vdso/const.h>

#ifndef BIT
#define BIT(nr)			(UL(1) << (nr))
#endif
#endif

#endif	/* __VDSO_BITS_H */
