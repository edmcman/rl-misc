#include <math.h>

# 1 
float func0(float param_1,float *param_2){float fVar1;fVar1 = param_2[6] * param_2[3] +param_2[1] * (param_1 - *param_2 * param_2[4]) + param_2[5] * param_2[2];param_2[4] = param_2[8];param_2[8] = param_1;param_2[6] = param_2[5];param_2[5] = fVar1;return fVar1;}