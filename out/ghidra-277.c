#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <math.h>

#include <float.h>

# 1 
void func0(double param_1,double param_2,double param_3,double param_4,double *param_5,double *param_6){double dVar1;dVar1 = param_4 * param_4 + param_3 * param_3;*param_5 = (param_2 * param_4 + param_1 * param_3) / dVar1;*param_6 = (param_2 * param_3 - param_1 * param_4) / dVar1;return;}