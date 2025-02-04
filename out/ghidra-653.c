#include <math.h>

#include <string.h>

#include <stdlib.h>

# 1 
void func0(float param_1,float param_2,undefined4 *param_3){long lVar1;long in_FS_OFFSET;float fVar2;float fVar3;float fVar4;lVar1 = *(long *)(in_FS_OFFSET + 0x28);fVar2 = (float)(param_3[4] ^ DAT_00100240);fVar3 = (float)(param_3[5] ^ DAT_00100240);fVar4 = (float)(param_3[6] ^ DAT_00100240);*param_3 = *param_3;param_3[1] = param_3[1];param_3[2] = param_3[2];param_3[4] = (float)param_3[8] * param_1 + (float)param_3[4] * param_2;param_3[5] = (float)param_3[9] * param_1 + (float)param_3[5] * param_2;param_3[6] = (float)param_3[10] * param_1 + (float)param_3[6] * param_2;param_3[8] = (float)param_3[8] * param_2 + fVar2 * param_1;param_3[9] = (float)param_3[9] * param_2 + fVar3 * param_1;param_3[10] = (float)param_3[10] * param_2 + fVar4 * param_1;if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}