#include <stdlib.h>

# 1 
double func0(int *param_1){int iVar1;int iVar2;int iVar3;int iVar4;iVar1 = param_1[3] * 0x9f5;iVar2 = iVar1;if (iVar1 < 0) {iVar2 = iVar1 + 0xfff;}iVar1 = iVar1 + (iVar2 >> 0xc) * -0x1000;iVar2 = param_1[3] * 0x9cc + param_1[2] * 0x9f5 + (iVar2 >> 0xc);iVar3 = iVar2;if (iVar2 < 0) {iVar3 = iVar2 + 0xfff;}iVar2 = iVar2 + (iVar3 >> 0xc) * -0x1000;iVar3 = param_1[3] * 0x142 + param_1[1] * 0x9f5 + (iVar3 >> 0xc) + param_1[2] * 0x9cc;iVar4 = iVar3;if (iVar3 < 0) {iVar4 = iVar3 + 0xfff;}iVar3 = iVar3 + (iVar4 >> 0xc) * -0x1000;iVar4 = (param_1[3] * 0x1ee +*param_1 * 0x9f5 + (iVar4 >> 0xc) + param_1[1] * 0x9cc + param_1[2] * 0x142) % 0x1000;*param_1 = iVar4;param_1[1] = iVar3;param_1[2] = iVar2;param_1[3] = iVar1;return DAT_001001c8 *((double)iVar4 +DAT_001001c8 *((double)iVar3 + DAT_001001c8 * ((double)iVar2 + DAT_001001c8 * (double)iVar1)));}