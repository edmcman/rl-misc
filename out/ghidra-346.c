#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(double *param_1,double *param_2,double *param_3){double dVar1;double dVar2;double dVar3;double dVar4;double dVar5;double dVar6;double dVar7;double dVar8;double dVar9;double dVar10;double dVar11;double dVar12;double dVar13;double dVar14;double dVar15;double dVar16;double dVar17;double dVar18;double dVar19;double dVar20;double dVar21;double dVar22;double dVar23;double dVar24;long lVar25;long in_FS_OFFSET;lVar25 = *(long *)(in_FS_OFFSET + 0x28);dVar1 = *param_1;dVar2 = param_2[1];dVar3 = param_1[1];dVar4 = param_2[5];dVar5 = param_1[2];dVar6 = param_2[9];dVar7 = param_1[3];dVar8 = param_2[0xd];dVar9 = *param_1;dVar10 = param_2[2];dVar11 = param_1[1];dVar12 = param_2[6];dVar13 = param_1[2];dVar14 = param_2[10];dVar15 = param_1[3];dVar16 = param_2[0xe];dVar17 = *param_1;dVar18 = param_2[3];dVar19 = param_1[1];dVar20 = param_2[7];dVar21 = param_1[2];dVar22 = param_2[0xb];dVar23 = param_1[3];dVar24 = param_2[0xf];*param_3 = param_2[0xc] * param_1[3] +*param_1 * *param_2 + param_2[4] * param_1[1] + param_2[8] * param_1[2];param_3[1] = dVar8 * dVar7 + dVar1 * dVar2 + dVar4 * dVar3 + dVar6 * dVar5;param_3[2] = dVar16 * dVar15 + dVar9 * dVar10 + dVar12 * dVar11 + dVar14 * dVar13;param_3[3] = dVar24 * dVar23 + dVar17 * dVar18 + dVar20 * dVar19 + dVar22 * dVar21;if (lVar25 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return 0;}