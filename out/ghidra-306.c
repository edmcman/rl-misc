#include <math.h>

#include <stdio.h>

# 1 
undefined8 func0(float param_1,long param_2,long param_3){undefined8 local_10;for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {if (param_1 < *(float *)(param_2 + local_10 * 4)) {*(float *)(param_2 + local_10 * 4) = param_1;}}return 0;}