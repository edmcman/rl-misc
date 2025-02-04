#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3,double *param_4){double dVar1;double dVar2;long lVar3;long in_FS_OFFSET;double dVar4;lVar3 = *(long *)(in_FS_OFFSET + 0x28);dVar1 = param_1[1];dVar2 = param_4[1];dVar4 = param_1[2] - param_4[2];*param_2 = dVar4 * param_3[4] + *param_3 * (*param_1 - *param_4) + (dVar1 - dVar2) * param_3[5];param_2[1] = dVar4 * param_3[3] + param_3[1] * (dVar1 - dVar2);param_2[2] = dVar4 * param_3[2];if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}