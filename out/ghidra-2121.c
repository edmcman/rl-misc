#include <stdio.h>

# 1 
float func0(long param_1){undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;local_14 = 0.0;local_10 = 0.0;local_c = DAT_00100114;for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {local_14 = *(float *)(param_1 + (long)local_18 * 4) + local_14;if (local_10 < *(float *)(param_1 + (long)local_18 * 4)) {local_10 = *(float *)(param_1 + (long)local_18 * 4);}if (*(float *)(param_1 + (long)local_18 * 4) < local_c) {local_c = *(float *)(param_1 + (long)local_18 * 4);}}return ((local_14 - local_10) - local_c) / DAT_00100118;}