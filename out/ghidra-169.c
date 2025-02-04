#include <stdio.h>

#include <math.h>

#include <time.h>

# 1 
void func0(double param_1,double *param_2,uint param_3){if ((param_3 & 1) == 0) {param_2[2] = param_2[2] + param_1;}else {*param_2 = *param_2 - param_1;}if ((param_3 & 2) == 0) {param_2[3] = param_2[3] + param_1;}else {param_2[1] = param_2[1] - param_1;}return;}