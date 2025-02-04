#include <stdio.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {local_10 = 0;for (local_c = 0; local_c < 4; local_c = local_c + 1) {local_10 = local_10 +*(int *)((long)local_c * 0xc + param_1 + (long)local_14 * 4) **(int *)((long)local_18 * 0x10 + param_2 + (long)local_c * 4);}*(int *)((long)local_18 * 0xc + param_3 + (long)local_14 * 4) = local_10;}}return;}