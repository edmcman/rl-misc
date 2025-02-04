#include <math.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,long param_2,uint param_3,double *param_4,double *param_5,double *param_6){double dVar1;undefined4 local_3c;undefined8 local_38;undefined8 local_30;undefined8 local_28;undefined8 local_20;undefined8 local_18;local_38 = 0.0;local_30 = 0.0;local_28 = 0.0;local_20 = 0.0;local_18 = 0.0;for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {local_38 = *(double *)(param_1 + (ulong)local_3c * 8) + local_38;local_30 = *(double *)(param_2 + (ulong)local_3c * 8) + local_30;local_28 = *(double *)(param_1 + (ulong)local_3c * 8) **(double *)(param_1 + (ulong)local_3c * 8) + local_28;local_20 = *(double *)(param_2 + (ulong)local_3c * 8) **(double *)(param_2 + (ulong)local_3c * 8) + local_20;local_18 = *(double *)(param_2 + (ulong)local_3c * 8) **(double *)(param_1 + (ulong)local_3c * 8) + local_18;}dVar1 = (double)param_3 * local_28 - local_38 * local_38;if (dVar1 == 0.0) {*param_6 = 0.0;*param_5 = *param_6;*param_4 = *param_5;}else {*param_4 = (local_30 * local_28 - local_38 * local_18) / dVar1;*param_5 = ((double)param_3 * local_18 - local_38 * local_30) / dVar1;if (((double)param_3 * local_20 - local_30 * local_30) *((double)param_3 * local_28 - local_38 * local_38) <= 0.0) {*param_6 = 0.0;*param_5 = *param_6;*param_4 = *param_5;}}return;}