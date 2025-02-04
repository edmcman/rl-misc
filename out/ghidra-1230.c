#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void func0(float param_1,float param_2,float *param_3){float fVar1;float fVar2;float fVar3;long lVar4;long in_FS_OFFSET;lVar4 = *(long *)(in_FS_OFFSET + 0x28);fVar1 = *param_3;fVar2 = param_3[1];fVar3 = param_3[2];*param_3 = *param_3 * param_2 - param_3[8] * param_1;param_3[1] = param_3[1] * param_2 - param_3[9] * param_1;param_3[2] = param_3[2] * param_2 - param_3[10] * param_1;param_3[4] = param_3[4];param_3[5] = param_3[5];param_3[6] = param_3[6];param_3[8] = param_3[8] * param_2 + fVar1 * param_1;param_3[9] = param_3[9] * param_2 + fVar2 * param_1;param_3[10] = param_3[10] * param_2 + fVar3 * param_1;if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}