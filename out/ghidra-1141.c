#include <assert.h>

# 1 
void func0(long param_1){undefined8 uVar1;undefined4 local_18;undefined4 local_14;for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {for (local_14 = local_18; local_14 < 3; local_14 = local_14 + 1) {uVar1 = *(undefined8 *)((long)local_18 * 0x18 + param_1 + (long)local_14 * 8);*(undefined8 *)((long)local_18 * 0x18 + param_1 + (long)local_14 * 8) =*(undefined8 *)((long)local_14 * 0x18 + param_1 + (long)local_18 * 8);*(undefined8 *)((long)local_14 * 0x18 + param_1 + (long)local_18 * 8) = uVar1;}}return;}