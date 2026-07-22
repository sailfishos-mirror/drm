/*
 * SPDX-FileCopyrightText: 1999 Precision Insight, Inc., Cedar Park, Texas.
 * SPDX-License-Identifier: MIT
 * SPDX-FileContributor: Rickard E. (Rik) Faith <faith@valinux.com>
 */

typedef struct RandomState {
    unsigned long magic;
    unsigned long a;
    unsigned long m;
    unsigned long q;		/* m div a */
    unsigned long r;		/* m mod a */
    unsigned long check;
    unsigned long seed;
} RandomState;
