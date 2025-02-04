#include <ctype.h>

#include <stdio.h>

# 1 
void func0(long param_1){undefined uVar1;int iVar2;undefined4 local_10;for (local_10 = 0; iVar2 = local_10, *(char *)(param_1 + local_10) != '\0';local_10 = local_10 + 1) {}for (local_10 = 0; local_10 < iVar2 / 2; local_10 = local_10 + 1) {uVar1 = *(undefined *)(param_1 + local_10);*(undefined *)(param_1 + local_10) = *(undefined *)(param_1 + (iVar2 - (local_10 + 1)));*(undefined *)((iVar2 - (local_10 + 1)) + param_1) = uVar1;}return;}