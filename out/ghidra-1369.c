#include <stdlib.h>

#include <stdint.h>

#include <string.h>

#include <math.h>

#include <limits.h>

#include <pthread.h>

# 1 
int func0(int param_1,int param_2,int param_3,int *param_4){uint uVar1;if ((param_1 < param_3) && (param_2 < param_3)) {param_3 = (param_2 + param_1) / 2;if (param_4 != (int *)0x0) {uVar1 = param_1 - param_2 >> 0x1f;*param_4 = (param_1 - param_2 ^ uVar1) - uVar1;}}else if (param_4 != (int *)0x0) {*param_4 = 10000000;}return param_3;}