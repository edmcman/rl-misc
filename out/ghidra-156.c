#include <string.h>

#include <math.h>

# 1 
void func0(float param_1,float param_2,float *param_3,float *param_4){float *pfVar1;float fVar2;float fVar3;float *local_30;float *local_20;int local_14;local_14 = 3;local_30 = param_4;local_20 = param_3;while (local_14 != 0) {pfVar1 = local_20 + 1;fVar2 = *local_20;local_20 = local_20 + 2;fVar3 = *pfVar1;pfVar1 = local_30 + 1;*local_30 = fVar2 * param_2 - fVar3 * param_1;local_30 = local_30 + 2;*pfVar1 = fVar3 * param_2 + fVar2 * param_1;local_14 = local_14 + -1;}return;}