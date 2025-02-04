#include <string.h>

#include <float.h>

# 1 
void func0(float *param_1,int *param_2,long param_3,int param_4){undefined4 local_14;undefined4 local_10;undefined4 local_c;local_14 = DAT_001000a8;local_10 = -1;for (local_c = 0; local_c < param_4; local_c = local_c + 1) {if (local_14 < *(float *)(param_3 + (long)local_c * 4)) {local_14 = *(float *)(param_3 + (long)local_c * 4);local_10 = local_c;}}if (param_1 != (float *)0x0) {*param_1 = local_14;}if (param_2 != (int *)0x0) {*param_2 = local_10;}return;}