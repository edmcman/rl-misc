#include <math.h>

#include <memory.h>

# 1 
void func0(float *param_1,float *param_2,float *param_3){*param_1 = param_3[2] * param_2[6] + *param_2 * *param_3 + param_3[1] * param_2[3];param_1[1] = param_3[2] * param_2[7] + param_2[1] * *param_3 + param_3[1] * param_2[4];param_1[2] = param_3[2] * param_2[8] + param_2[2] * *param_3 + param_3[1] * param_2[5];param_1[3] = param_3[5] * param_2[6] + *param_2 * param_3[3] + param_3[4] * param_2[3];param_1[4] = param_3[5] * param_2[7] + param_2[1] * param_3[3] + param_3[4] * param_2[4];param_1[5] = param_3[5] * param_2[8] + param_2[2] * param_3[3] + param_3[4] * param_2[5];param_1[6] = param_3[8] * param_2[6] + *param_2 * param_3[6] + param_3[7] * param_2[3];param_1[7] = param_3[8] * param_2[7] + param_2[1] * param_3[6] + param_3[7] * param_2[4];param_1[8] = param_3[8] * param_2[8] + param_2[2] * param_3[6] + param_3[7] * param_2[5];return;}