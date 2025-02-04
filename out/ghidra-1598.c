#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void func0(double *param_1,double *param_2){double dVar1;double dVar2;double dVar3;double dVar4;dVar1 = param_1[8] * param_1[4] - param_1[5] * param_1[7];dVar2 = param_1[8] * param_1[3] - param_1[6] * param_1[5];dVar3 = param_1[7] * param_1[3] - param_1[6] * param_1[4];dVar4 = param_1[2] * dVar3 + (*param_1 * dVar1 - param_1[1] * dVar2);*param_2 = dVar1 / dVar4;param_2[1] = (param_1[7] * param_1[2] - param_1[8] * param_1[1]) / dVar4;param_2[2] = (param_1[5] * param_1[1] - param_1[4] * param_1[2]) / dVar4;param_2[3] = (double)((ulong)dVar2 ^ DAT_00100310) / dVar4;param_2[4] = (param_1[8] * *param_1 - param_1[6] * param_1[2]) / dVar4;param_2[5] = (param_1[2] * param_1[3] - param_1[5] * *param_1) / dVar4;param_2[6] = dVar3 / dVar4;param_2[7] = (param_1[1] * param_1[6] - param_1[7] * *param_1) / dVar4;param_2[8] = (param_1[4] * *param_1 - param_1[1] * param_1[3]) / dVar4;return;}