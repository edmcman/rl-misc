#include <stdlib.h>

#include <math.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3,double *param_4){*param_1 = param_4[2] * param_3[2] + *param_3 * *param_4 + param_4[1] * param_3[1] + *param_2;param_1[1] = param_4[2] * param_3[4] + param_3[1] * *param_4 + param_4[1] * param_3[3] +param_2[1];param_1[2] = param_4[2] * param_3[5] + param_3[2] * *param_4 + param_4[1] * param_3[4] +param_2[2];return;}