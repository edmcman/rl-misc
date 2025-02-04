#include <assert.h>

#include <math.h>

#include <setjmp.h>

#include <stdbool.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,int param_2,int param_3){undefined4 local_c;param_3 = param_3 * param_3;if (0x40 < param_3) {param_3 = 0x40;}*(short *)(param_1 + (long)param_2 * 2) = *(short *)(param_1 + (long)param_2 * 2) + (short)param_3;if (0x7ff < *(short *)(param_1 + (long)param_2 * 2)) {for (local_c = 0; local_c < 0x1000; local_c = local_c + 1) {*(short *)(param_1 + (long)local_c * 2) = *(short *)(param_1 + (long)local_c * 2) >> 1;}}return;}