#include <stdio.h>

# 1 
void func0(double *param_1,double *param_2){double dVar1;dVar1 = *param_1;*param_1 = *param_2;*param_2 = (double)(int)dVar1;return;}