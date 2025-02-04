#include <math.h>

# 1 
void func0(double *param_1,double *param_2){double dVar1;double dVar2;double dVar3;dVar1 = *param_2;dVar2 = param_2[1];dVar3 = param_2[2];*param_2 = param_1[6] * dVar3 + *param_1 * dVar1 + param_1[3] * dVar2;param_2[1] = param_1[7] * dVar3 + param_1[1] * dVar1 + param_1[4] * dVar2;param_2[2] = param_1[8] * dVar3 + param_1[2] * dVar1 + param_1[5] * dVar2;return;}