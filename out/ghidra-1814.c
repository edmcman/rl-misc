#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void func0(long param_1,long param_2,long param_3,int param_4,float *param_5,float *param_6){double dVar1;undefined4 local_4c;undefined8 local_48;undefined8 local_40;undefined8 local_38;undefined8 local_30;undefined8 local_28;local_28 = 0.0;local_30 = 0.0;local_38 = 0.0;local_40 = 0.0;local_48 = 0.0;for (local_4c = 0; local_4c < param_4; local_4c = local_4c + 1) {local_48 = DAT_00100280 / (double)*(float *)(param_3 + (long)local_4c * 4) + local_48;local_40 = (double)(*(float *)(param_1 + (long)local_4c * 4) /*(float *)(param_3 + (long)local_4c * 4)) + local_40;local_38 = (double)(*(float *)(param_2 + (long)local_4c * 4) /*(float *)(param_3 + (long)local_4c * 4)) + local_38;local_30 = (double)((*(float *)(param_1 + (long)local_4c * 4) **(float *)(param_1 + (long)local_4c * 4)) /*(float *)(param_3 + (long)local_4c * 4)) + local_30;local_28 = (double)((*(float *)(param_2 + (long)local_4c * 4) **(float *)(param_1 + (long)local_4c * 4)) /*(float *)(param_3 + (long)local_4c * 4)) + local_28;}dVar1 = local_48 * local_30 - local_40 * local_40;*param_5 = (float)((local_48 * local_28 - local_40 * local_38) / dVar1);*param_6 = (float)((local_30 * local_38 - local_40 * local_28) / dVar1);return;}