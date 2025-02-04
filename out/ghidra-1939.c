#include <string.h>

#include <stdlib.h>

#include <stdint.h>

# 1 
void func0(double *param_1,long param_2,float *param_3){double *pdVar1;double *local_20;long local_10;*param_3 = 0.0;param_3[1] = 0.0;param_3[2] = 0.0;local_20 = param_1;local_10 = param_2 * 3;while (local_10 != 0) {*param_3 = *param_3 + (float)*local_20;pdVar1 = local_20 + 2;param_3[1] = param_3[1] + (float)local_20[1];local_20 = local_20 + 3;param_3[2] = param_3[2] + (float)*pdVar1;local_10 = local_10 + -1;}*param_3 = *param_3 / (float)param_2;param_3[1] = param_3[1] / (float)param_2;param_3[2] = param_3[2] / (float)param_2;return;}