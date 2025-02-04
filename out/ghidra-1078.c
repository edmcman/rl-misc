#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1){undefined4 uVar1;undefined4 local_18;undefined4 local_14;undefined4 local_10;local_14 = 10;for (local_18 = 1; local_18 < 10; local_18 = local_18 + 1) {for (local_10 = 0; local_10 < local_14 + -1; local_10 = local_10 + 1) {if (*(int *)(param_1 + ((long)local_10 + 1) * 4) < *(int *)(param_1 + (long)local_10 * 4)) {uVar1 = *(undefined4 *)(param_1 + (long)local_10 * 4);*(undefined4 *)(param_1 + (long)local_10 * 4) =*(undefined4 *)(param_1 + ((long)local_10 + 1) * 4);*(undefined4 *)(((long)local_10 + 1) * 4 + param_1) = uVar1;}}local_14 = local_14 + -1;}return;}