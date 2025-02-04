#include <math.h>

#include <float.h>

# 1 
void func0(float param_1,long param_2,int param_3,long param_4){undefined4 local_c;for (local_c = 0; local_c <= param_3; local_c = local_c + 1) {if (DAT_001000e8 < param_1) {*(float *)(param_4 + (long)local_c * 4) =(*(float *)(param_2 + (long)local_c * 4) - *(float *)(param_4 + (long)local_c * 4)) /param_1 + *(float *)(param_4 + (long)local_c * 4);}else {*(undefined4 *)(param_4 + (long)local_c * 4) = *(undefined4 *)((long)local_c * 4 + param_2);}}return;}