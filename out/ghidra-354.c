#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <GL/gl.h>

# 1 
void func0(float *param_1,long param_2,int param_3){float fVar1;float fVar2;float fVar3;fVar1 = *(float *)(param_2 + (long)param_3 * 4);fVar2 = *(float *)(param_2 + ((long)param_3 + 1) * 4);fVar3 = *(float *)(param_2 + ((long)param_3 + 2) * 4);*(float *)(param_2 + (long)param_3 * 4) =param_1[0xc] + *param_1 * fVar1 + param_1[4] * fVar2 + param_1[8] * fVar3;*(float *)(param_2 + ((long)param_3 + 1) * 4) =param_1[0xd] + param_1[1] * fVar1 + param_1[5] * fVar2 + param_1[9] * fVar3;*(float *)(param_2 + ((long)param_3 + 2) * 4) =param_1[0xe] + param_1[2] * fVar1 + param_1[6] * fVar2 + param_1[10] * fVar3;return;}