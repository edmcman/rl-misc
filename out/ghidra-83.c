#include <stdio.h>

# 1 
void func0(long param_1){undefined4 uVar1;undefined4 local_14;undefined4 local_10;for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {for (local_10 = local_14; local_10 < 3; local_10 = local_10 + 1) {uVar1 = *(undefined4 *)(param_1 + ((long)local_10 + (long)(local_14 * 3)) * 4);*(undefined4 *)(((long)local_10 + (long)(local_14 * 3)) * 4 + param_1) =*(undefined4 *)(((long)local_14 + (long)(local_10 * 3)) * 4 + param_1);*(undefined4 *)(((long)local_14 + (long)(local_10 * 3)) * 4 + param_1) = uVar1;}}return;}