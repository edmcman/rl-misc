#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

#include <string.h>

# 1 
void func0(double param_1,double param_2,double param_3,double param_4,double *param_5){double dVar1;*param_5 = ((param_1 * param_1 + param_2 * param_2) - param_3 * param_3) - param_4 * param_4;dVar1 = param_1 * param_4 + param_2 * param_3;param_5[1] = dVar1 + dVar1;dVar1 = param_2 * param_4 - param_1 * param_3;param_5[2] = dVar1 + dVar1;dVar1 = param_2 * param_3 - param_1 * param_4;param_5[3] = dVar1 + dVar1;param_5[4] = ((param_1 * param_1 - param_2 * param_2) + param_3 * param_3) - param_4 * param_4;dVar1 = param_1 * param_2 + param_3 * param_4;param_5[5] = dVar1 + dVar1;dVar1 = param_1 * param_3 + param_2 * param_4;param_5[6] = dVar1 + dVar1;dVar1 = param_3 * param_4 - param_1 * param_2;param_5[7] = dVar1 + dVar1;param_5[8] = param_4 * param_4 + ((param_1 * param_1 - param_2 * param_2) - param_3 * param_3);return;}