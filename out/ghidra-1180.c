#include <stdio.h>

#include <math.h>

#include <stdlib.h>

# 1 
void func0(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,double *param_6){int local_c;*param_3 = *param_1;*param_4 = *param_1;*param_5 = 0;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if (param_1[local_c] < *param_3) {*param_3 = param_1[local_c];}if (*param_4 < param_1[local_c]) {*param_4 = param_1[local_c];}*param_5 = *param_5 + param_1[local_c];}*param_6 = (double)*param_5 / (double)param_2;return;}