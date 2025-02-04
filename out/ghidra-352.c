#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
float func0(long *param_1){int iVar1;float fVar2;int local_18;if (*param_1 < 1) {if (*param_1 < 0) {DAT_001002f8 = *param_1;}else {*param_1 = 1;}for (local_18 = 0x27; -1 < local_18; local_18 = local_18 + -1) {*param_1 = (*param_1 / 0xd1a4) * -0x7fffffab + *param_1 * 0x9c4e;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffab;}if (local_18 < 0x20) {(&DAT_00100300)[local_18] = *param_1;}}DAT_00100400 = DAT_00100300;}*param_1 = (*param_1 / 0xd1a4) * -0x7fffffab + *param_1 * 0x9c4e;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffab;}DAT_001002f8 = DAT_001002f8 * 0x9ef4 + (DAT_001002f8 / 0xce26) * -0x7fffff07;if (DAT_001002f8 < 0) {DAT_001002f8 = DAT_001002f8 + 0x7fffff07;}iVar1 = (int)(DAT_00100400 / 0x3fffffe);DAT_00100400 = (&DAT_00100300)[iVar1] - DAT_001002f8;(&DAT_00100300)[iVar1] = *param_1;if (DAT_00100400 < 1) {DAT_00100400 = DAT_00100400 + 0x7fffffaa;}fVar2 = (float)(DAT_00100408 * (double)DAT_00100400);if (_DAT_00100410 < (double)fVar2) {fVar2 = DAT_00100418;}return fVar2;}