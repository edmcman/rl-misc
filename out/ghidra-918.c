#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_c = 0; local_c < 4; local_c = local_c + 1) {for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {*(float *)(param_3 + (ulong)(local_10 + local_c * 4) * 4) =*(float *)(param_2 + (ulong)(local_c * 4 + 3) * 4) **(float *)(param_1 + (ulong)(local_10 + 0xc) * 4) +*(float *)(param_1 + (ulong)local_10 * 4) **(float *)(param_2 + (ulong)(local_c << 2) * 4) +*(float *)(param_2 + (ulong)(local_c * 4 + 1) * 4) **(float *)(param_1 + (ulong)(local_10 + 4) * 4) +*(float *)(param_2 + (ulong)(local_c * 4 + 2) * 4) **(float *)(param_1 + (ulong)(local_10 + 8) * 4);}}return;}