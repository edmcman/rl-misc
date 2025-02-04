#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
void func0(float param_1,float *param_2){float fVar1;float fVar2;float fVar3;float fVar4;float fVar5;float fVar6;float fVar7;float fVar8;float fVar9;float fVar10;fVar1 = *param_2 + param_2[1];fVar2 = *param_2 - param_2[1];fVar3 = param_2[2] + param_2[6];fVar4 = param_2[3] - param_2[7];fVar5 = param_2[2] - param_2[6];fVar6 = param_2[3] + param_2[7];fVar7 = (fVar3 - DAT_00100328 * fVar5) - DAT_00100328 * fVar6;fVar8 = (DAT_00100328 * fVar5 + fVar4) - DAT_00100328 * fVar6;fVar3 = DAT_0010032c * fVar3 - fVar7;fVar4 = fVar8 - DAT_0010032c * fVar4;fVar5 = fVar1 + param_2[4] * DAT_0010032c;fVar6 = fVar2 - param_2[5] * DAT_0010032c;fVar1 = fVar1 - param_2[4] * DAT_0010032c;fVar2 = param_2[5] * DAT_0010032c + fVar2;fVar9 = fVar7 - fVar3;fVar10 = fVar8 - fVar4;fVar7 = fVar7 + fVar3;fVar8 = fVar8 + fVar4;*param_2 = param_1 * (fVar5 + fVar7);param_2[1] = param_1 * (fVar6 + fVar8);param_2[2] = param_1 * (fVar1 - fVar10);param_2[3] = param_1 * (fVar2 + fVar9);param_2[4] = param_1 * (fVar5 - fVar7);param_2[5] = param_1 * (fVar6 - fVar8);param_2[6] = param_1 * (fVar1 + fVar10);param_2[7] = param_1 * (fVar2 - fVar9);return;}