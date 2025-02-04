







# 1 
double func0(long *param_1){int iVar1;double dVar2;if ((*param_1 < 1) || (DAT_00100240 == 0)) {if (*param_1 < 0) {*param_1 = -*param_1;}else {*param_1 = 1;}for (iVar1 = 0x27; -1 < iVar1; iVar1 = iVar1 + -1) {*param_1 = (*param_1 / 0x1f31d) * -0x7fffffff + *param_1 * 0x41a7;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffff;}if (iVar1 < 0x20) {(&DAT_00100260)[iVar1] = *param_1;}}DAT_00100240 = DAT_00100260;}*param_1 = (*param_1 / 0x1f31d) * -0x7fffffff + *param_1 * 0x41a7;if (*param_1 < 0) {*param_1 = *param_1 + 0x7fffffff;}if (DAT_00100240 < 0) {DAT_00100240 = DAT_00100240 + 0x3ffffff;}iVar1 = (int)(DAT_00100240 >> 0x1a);DAT_00100240 = (&DAT_00100260)[iVar1];(&DAT_00100260)[iVar1] = *param_1;dVar2 = DAT_00100360 * (double)DAT_00100240;if (DAT_00100368 < dVar2) {dVar2 = DAT_00100368;}return dVar2;}