#include <math.h>

# 1 
void func0(double *param_1,double *param_2,double *param_3,int param_4){int iVar1;iVar1 = param_4 * 2;*param_1 = param_3[iVar1] * param_2[param_4] - param_3[param_4] * param_2[iVar1];param_1[1] = *param_3 * param_2[iVar1] - param_3[iVar1] * *param_2;param_1[2] = param_3[param_4] * *param_2 - *param_3 * param_2[param_4];return;}