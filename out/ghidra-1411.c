#include <math.h>

#include <float.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(int param_1,long param_2,long param_3,double *param_4){undefined4 local_2c;undefined8 local_28;undefined8 local_20;undefined8 local_18;local_28 = 0.0;local_20 = 0.0;for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {local_28 = *(double *)(param_2 + (long)local_2c * 8) + local_28;local_20 = *(double *)(param_3 + (long)local_2c * 8) + local_20;}local_18 = 0.0;for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {local_18 = (*(double *)(param_3 + (long)local_2c * 8) - local_20 / (double)param_1) *(*(double *)(param_2 + (long)local_2c * 8) - local_28 / (double)param_1) + local_18;}*param_4 = local_18 / (double)param_1;return;}