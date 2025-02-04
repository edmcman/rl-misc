#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
void func0(float *param_1,float *param_2,float *param_3){*param_3 = param_2[3] * param_1[3] +*param_1 * *param_2 + param_2[1] * param_1[1] + param_2[2] * param_1[2];param_3[1] = param_2[3] * param_1[7] +param_1[4] * *param_2 + param_2[1] * param_1[5] + param_2[2] * param_1[6];param_3[2] = param_2[3] * param_1[0xb] +param_1[8] * *param_2 + param_2[1] * param_1[9] + param_2[2] * param_1[10];param_3[3] = param_2[3] * param_1[0xf] +param_1[0xc] * *param_2 + param_2[1] * param_1[0xd] + param_2[2] * param_1[0xe];return;}