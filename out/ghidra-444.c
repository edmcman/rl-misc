#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <memory.h>

# 1 
int func0(float param_1,long param_2,int param_3){int local_c;if (0.0 < param_1) {if (param_1 < _DAT_00100080) {for (local_c = 1; local_c < param_3; local_c = local_c + 1) {if (param_1 < *(float *)(param_2 + (long)local_c * 4)) {return local_c + -1;}}param_3 = param_3 + -1;}else {param_3 = param_3 + -1;}}else {param_3 = 0;}return param_3;}