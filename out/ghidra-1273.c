#include <math.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

# 1 
void func0(int *param_1,int param_2,int param_3,int param_4,int param_5){int local_14;if (param_5 == 0) {param_1[3] = 0;local_14 = param_2;}else {param_1[3] = param_2 % param_5;local_14 = param_2 / param_5;}if (param_4 == 0) {param_1[2] = 0;}else {param_1[2] = local_14 % param_4;local_14 = local_14 / param_4;}param_1[1] = local_14 % param_3;*param_1 = local_14 / param_3;return;}