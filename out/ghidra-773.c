#include <time.h>

#include <stdlib.h>

#include <math.h>

# 1 
float func0(long *param_1,int param_2){int iVar1;float fVar2;int local_18;if (param_2 != 0) {DAT_00100260 = 0;}if ((*param_1 < 1) || (DAT_00100260 == 0)) {if (*param_1 < 0) {*param_1 = -*param_1;}else {*param_1 = 1;}for (local_18 = 0x27; -1 < local_18; local_18 = local_18 + -1) {*param_1 = (*param_1 / 0x1f31d) * -0x7fffffff + *param_1 * 0x41a7;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffff;}if (local_18 < 0x20) {(&DAT_00100280)[local_18] = *param_1;}}DAT_00100260 = DAT_00100280;}*param_1 = (*param_1 / 0x1f31d) * -0x7fffffff + *param_1 * 0x41a7;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffff;}if (DAT_00100260 < 0) {DAT_00100260 = DAT_00100260 + 0x3ffffff;}iVar1 = (int)(DAT_00100260 >> 0x1a);DAT_00100260 = (&DAT_00100280)[iVar1];(&DAT_00100280)[iVar1] = *param_1;fVar2 = (float)(DAT_00100380 * (double)DAT_00100260);if (_DAT_00100388 < (double)fVar2) {fVar2 = DAT_00100390;}return fVar2;}