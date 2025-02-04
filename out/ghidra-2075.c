#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
int func0(float param_1,float param_2,float param_3,char param_4,long param_5,long param_6){int iVar1;int iVar2;float fVar3;float fVar4;float local_30;float local_2c;int local_28;int local_24;local_24 = 0;if ((param_4 < '0') || ('9' < param_4)) {local_24 = 0;}else {iVar2 = *(int *)(&DAT_001001e0 + (long)(param_4 + -0x2e) * 4);iVar1 = *(int *)(&DAT_001001e0 + (long)(param_4 + -0x2f) * 4);for (local_28 = iVar1; local_28 <= iVar2 + -1; local_28 = local_28 + 1) {fVar3 = (float)(*(int *)(&DAT_00100220 + (long)local_28 * 4) / 10) * param_3;fVar4 = (float)((*(int *)(&DAT_00100220 + (long)local_28 * 4) / 10) * -10 +*(int *)(&DAT_00100220 + (long)local_28 * 4)) * param_3;if (local_28 != iVar1) {*(float *)(param_5 + (long)local_24 * 4) = local_30;*(float *)(param_6 + (long)local_24 * 4) = local_2c;*(float *)(param_5 + (long)(local_24 + 1) * 4) = param_1 - fVar3;*(float *)(param_6 + (long)(local_24 + 1) * 4) = param_2 - fVar4;local_24 = local_24 + 2;}local_30 = param_1 - fVar3;local_2c = param_2 - fVar4;}}return local_24;}