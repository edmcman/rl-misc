#include <stdio.h>

#include <math.h>

#include <string.h> /* memcpy */

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 4) {for (local_c = 0; local_c < 4; local_c = local_c + 1) {*(float *)(param_1 + (long)(local_c + local_10) * 4) =*(float *)(param_2 + ((long)local_c + 0xc) * 4) **(float *)(param_3 + ((long)local_10 + 3) * 4) +*(float *)(param_3 + (long)local_10 * 4) * *(float *)(param_2 + (long)local_c * 4) +*(float *)(param_2 + ((long)local_c + 4) * 4) **(float *)(param_3 + ((long)local_10 + 1) * 4) +*(float *)(param_2 + ((long)local_c + 8) * 4) **(float *)(param_3 + ((long)local_10 + 2) * 4);}}return;}