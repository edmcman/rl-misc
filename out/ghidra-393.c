#include <stdio.h>

# 1 
void func0(long param_1){undefined uVar1;undefined4 local_14;undefined4 local_10;for (local_14 = 0; *(char *)(param_1 + local_14) != '\0'; local_14 = local_14 + 1) {}if (*(char *)(param_1 + (long)local_14 + -1) == '\n') {local_10 = local_14 + -2;}else {local_10 = local_14 + -1;}for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {uVar1 = *(undefined *)(param_1 + local_14);*(undefined *)(param_1 + local_14) = *(undefined *)(param_1 + local_10);*(undefined *)(param_1 + local_10) = uVar1;local_10 = local_10 + -1;}return;}