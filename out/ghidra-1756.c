#include <string.h>

#include <ctype.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3){*param_3 = param_2[2] * param_1[1] - param_2[1] * param_1[2];param_3[1] = *param_2 * param_1[2] - param_2[2] * *param_1;param_3[2] = param_2[1] * *param_1 - *param_2 * param_1[1];return;}