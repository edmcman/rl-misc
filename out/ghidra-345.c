#include <math.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3){*param_3 = param_1[0xc] + *param_1 * *param_2 + param_2[1] * param_1[4] + param_2[2] * param_1[8];param_3[1] = param_1[0xd] +param_1[1] * *param_2 + param_2[1] * param_1[5] + param_2[2] * param_1[9];param_3[2] = param_1[0xe] +param_1[2] * *param_2 + param_2[1] * param_1[6] + param_2[2] * param_1[10];return;}