#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3){double dVar1;double dVar2;double dVar3;double dVar4;double dVar5;double dVar6;double dVar7;double dVar8;double dVar9;double dVar10;double dVar11;double dVar12;long lVar13;long in_FS_OFFSET;lVar13 = *(long *)(in_FS_OFFSET + 0x28);dVar1 = param_2[3];dVar2 = *param_1;dVar3 = param_2[4];dVar4 = param_1[1];dVar5 = param_2[5];dVar6 = param_1[2];dVar7 = param_2[6];dVar8 = *param_1;dVar9 = param_2[7];dVar10 = param_1[1];dVar11 = param_2[8];dVar12 = param_1[2];*param_3 = param_1[2] * param_2[2] + *param_2 * *param_1 + param_1[1] * param_2[1];param_3[1] = dVar6 * dVar5 + dVar1 * dVar2 + dVar4 * dVar3;param_3[2] = dVar12 * dVar11 + dVar7 * dVar8 + dVar10 * dVar9;if (lVar13 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}