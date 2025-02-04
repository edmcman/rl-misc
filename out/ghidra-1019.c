#include <stdio.h>

# 1 
void func0(long param_1,long param_2){undefined4 local_18;undefined4 local_14;undefined8 local_10;for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {local_10 = 0.0;for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {local_10 = *(double *)((long)local_14 * 0x28 + param_1 + (long)local_18 * 8) + local_10;}*(double *)(param_2 + (long)local_18 * 8) = local_10 / DAT_001000a8;}return;}