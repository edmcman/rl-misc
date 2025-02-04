#include <stdio.h>

#include <string.h>

# 1 
void func0(long param_1){int *piVar1;undefined4 local_c;local_c = 1;*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;for (; local_c < 10; local_c = local_c + 1) {if (1 < *(int *)(param_1 + (long)local_c * 4)) {piVar1 = (int *)(param_1 + ((long)local_c + 1) * 4);*piVar1 = *piVar1 + 1;*(undefined4 *)(param_1 + (long)local_c * 4) = 0;}}return;}