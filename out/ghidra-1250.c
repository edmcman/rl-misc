#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <float.h>

#include <ctype.h>

#include <time.h>

#include <limits.h>

#include <string.h>

#include <stdarg.h>

# 1 
undefined8 func0(long param_1){undefined8 uVar1;if ((*(double *)(param_1 + 0x10) <= 0.0) || (*(double *)(param_1 + 0x18) <= 0.0)) {uVar1 = 0;}else {if (*(double *)(param_1 + 0x10) < *(double *)(param_1 + 0x18)) {uVar1 = *(undefined8 *)(param_1 + 0x18);*(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);*(undefined8 *)(param_1 + 0x10) = uVar1;*(double *)(param_1 + 0x20) = DAT_001001a8 + *(double *)(param_1 + 0x20);}if (*(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x18) <= _DAT_001001b0) {if (DAT_001001a8 < *(double *)(param_1 + 0x20)) {*(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) - DAT_001001b8;}if (DAT_001001b8 < *(double *)(param_1 + 0x20)) {*(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) - DAT_001001b8;}if (*(double *)(param_1 + 0x20) < DAT_001001c0) {*(double *)(param_1 + 0x20) = DAT_001001b8 + *(double *)(param_1 + 0x20);}uVar1 = 1;}else {uVar1 = 0;}}return uVar1;}