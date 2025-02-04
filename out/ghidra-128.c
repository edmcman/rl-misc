#include <stdio.h>

#include <math.h>

# 1 
void func0(double param_1,double param_2,double param_3,double param_4,double param_5,double param_6,double *param_7,double *param_8){double dVar1;double dVar2;dVar1 = *param_7;dVar2 = *param_8;*param_7 = *param_8 * param_3 + *param_7 * param_2 + param_1;*param_8 = dVar2 * param_6 + dVar1 * param_5 + param_4;return;}