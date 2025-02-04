#include <math.h>

#include <stdint.h>

# 1 
void func0(float *param_1,float *param_2){float fVar1;*param_2 = ((param_1[1] * param_1[1] + *param_1 * *param_1) - param_1[2] * param_1[2]) -param_1[3] * param_1[3];fVar1 = param_1[3] * *param_1 + param_1[1] * param_1[2];param_2[1] = fVar1 + fVar1;fVar1 = param_1[3] * param_1[1] - param_1[2] * *param_1;param_2[2] = fVar1 + fVar1;fVar1 = param_1[2] * param_1[1] - param_1[3] * *param_1;param_2[3] = fVar1 + fVar1;param_2[4] = (param_1[2] * param_1[2] + (*param_1 * *param_1 - param_1[1] * param_1[1])) -param_1[3] * param_1[3];fVar1 = param_1[1] * *param_1 + param_1[2] * param_1[3];param_2[5] = fVar1 + fVar1;fVar1 = param_1[2] * *param_1 + param_1[1] * param_1[3];param_2[6] = fVar1 + fVar1;fVar1 = param_1[3] * param_1[2] - param_1[1] * *param_1;param_2[7] = fVar1 + fVar1;param_2[8] = param_1[3] * param_1[3] +((*param_1 * *param_1 - param_1[1] * param_1[1]) - param_1[2] * param_1[2]);return;}