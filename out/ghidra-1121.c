#include <float.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
void func0(double *param_1,double *param_2){double dVar1;dVar1 = (param_1[5] * param_1[6] * param_1[1] +*param_1 * param_1[4] * param_1[8] + param_1[2] * param_1[3] * param_1[7]) -(param_1[2] * param_1[6] * param_1[4] +*param_1 * param_1[7] * param_1[5] + param_1[8] * param_1[3] * param_1[1]);if (dVar1 == 0.0) {*param_2 = *param_1;param_2[3] = param_1[1];param_2[6] = param_1[2];param_2[1] = param_1[3];param_2[4] = param_1[4];param_2[7] = param_1[5];param_2[2] = param_1[6];param_2[5] = param_1[7];param_2[8] = param_1[8];}else {*param_2 = (param_1[8] * param_1[4] - param_1[7] * param_1[5]) / dVar1;param_2[3] = (param_1[6] * param_1[5] - param_1[8] * param_1[3]) / dVar1;param_2[6] = (param_1[7] * param_1[3] - param_1[6] * param_1[4]) / dVar1;param_2[1] = (param_1[7] * param_1[2] - param_1[8] * param_1[1]) / dVar1;param_2[4] = (param_1[8] * *param_1 - param_1[6] * param_1[2]) / dVar1;param_2[7] = (param_1[6] * param_1[1] - param_1[7] * *param_1) / dVar1;param_2[2] = (param_1[5] * param_1[1] - param_1[4] * param_1[2]) / dVar1;param_2[5] = (param_1[3] * param_1[2] - param_1[5] * *param_1) / dVar1;param_2[8] = (param_1[4] * *param_1 - param_1[3] * param_1[1]) / dVar1;}return;}