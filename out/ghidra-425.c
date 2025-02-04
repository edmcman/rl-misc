#include <math.h>

# 1 
void func0(long param_1,double *param_2,double *param_3,double *param_4){double dVar1;double dVar2;double dVar3;int local_24;dVar1 = *param_2;dVar2 = param_2[1];dVar3 = param_2[2];*param_4 = param_3[6] * dVar3 + *param_3 * dVar1 + param_3[3] * dVar2;param_4[1] = param_3[7] * dVar3 + param_3[1] * dVar1 + param_3[4] * dVar2;param_4[2] = param_3[8] * dVar3 + param_3[2] * dVar1 + param_3[5] * dVar2;for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {param_4[local_24] = *(double *)(param_1 + (long)local_24 * 8) + param_4[local_24];}return;}