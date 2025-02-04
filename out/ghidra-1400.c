#include <stdio.h>

#include <math.h>

# 1 
void func0(long param_1,int *param_2,int *param_3,int *param_4){long lVar1;long lVar2;long lVar3;long local_38;if (param_1 < 0x231519) {local_38 = param_1;if (param_1 < 0) {local_38 = param_1 + (param_1 / 0x8ead) * -0x8ead + 0x8ead;}}else {lVar1 = (long)(((double)(param_1 + -0x1c7dd0) - DAT_00100280) / DAT_00100288);local_38 = (param_1 + 1 + lVar1) - (long)(DAT_00100280 * (double)lVar1);}lVar1 = (long)(DAT_001002a0 + ((double)(local_38 + -0x2534ca) - DAT_00100290) / DAT_00100298);lVar2 = (long)(DAT_00100280 * (double)lVar1 + (double)(lVar1 * 0x16d));lVar3 = (long)((double)((local_38 + 0x5f4) - lVar2) / DAT_001002a8);*param_3 = ((int)(local_38 + 0x5f4) - (int)lVar2) - (int)(long)(DAT_001002a8 * (double)lVar3);*param_2 = (int)lVar3 + -1;if (0xc < *param_2) {*param_2 = *param_2 + -0xc;}*param_4 = (int)lVar1 + -0x126b;if (2 < *param_2) {*param_4 = *param_4 + -1;}if (*param_4 < 1) {*param_4 = *param_4 + -1;}return;}