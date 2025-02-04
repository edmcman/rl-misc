#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void func0(float *param_1){float fVar1;float fVar2;fVar2 = DAT_001000f0 / (param_1[3] * *param_1 - param_1[2] * param_1[1]);fVar1 = *param_1;*param_1 = param_1[3] * fVar2;param_1[1] = param_1[1] * (float)(DAT_00100100 ^ (uint)fVar2);param_1[2] = param_1[2] * (float)(DAT_00100100 ^ (uint)fVar2);param_1[3] = fVar2 * fVar1;return;}