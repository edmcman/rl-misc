#include <stdio.h>

# 1 
void func0(long param_1){undefined uVar1;int iVar2;undefined4 local_1c;undefined4 local_18;undefined4 local_14;undefined4 local_10;local_18 = 0;for (local_14 = 0; *(char *)(param_1 + local_14) != '\0'; local_14 = local_14 + 1) {local_18 = local_18 + 1;}local_14 = 0;while (local_14 < local_18) {local_1c = local_14;if (*(char *)(param_1 + local_14) == ' ') {local_1c = local_14 + 1;}for (local_10 = local_1c;(iVar2 = local_10, *(char *)(param_1 + local_10) != ' ' &&(*(char *)(param_1 + local_10) != '\0')); local_10 = local_10 + 1) {}for (local_14 = local_1c; local_10 = local_10 + -1, local_14 <= local_10;local_14 = local_14 + 1) {uVar1 = *(undefined *)(param_1 + local_14);*(undefined *)(param_1 + local_14) = *(undefined *)(param_1 + local_10);*(undefined *)(local_10 + param_1) = uVar1;}local_14 = iVar2;}return;}