#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
void func0(float param_1,float param_2,long param_3,long param_4){undefined4 local_c;for (local_c = 0; (float)local_c <= param_1; local_c = local_c + 1) {if (*(float *)(param_4 + (long)local_c * 4) < *(float *)(param_3 + (long)local_c * 4)) {*(float *)(param_3 + (long)local_c * 4) =*(float *)(param_3 + (long)local_c * 4) * (DAT_001000e0 - param_2) +*(float *)(param_4 + (long)local_c * 4) * param_2;}}return;}