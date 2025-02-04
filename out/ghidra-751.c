#include <stdio.h>

#include <string.h>

# 1 
void func0(long param_1){int iVar1;int iVar2;long lVar3;undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_18 = 0; local_14 = local_18, *(char *)(param_1 + local_18) != '\0';local_18 = local_18 + 1) {while (local_14 = local_14 + 1, iVar1 = local_14, *(char *)(param_1 + local_14) != '\0') {if (*(char *)(param_1 + local_18) == *(char *)(param_1 + local_14)) {local_c = local_14;while (*(char *)(param_1 + local_18) == *(char *)(param_1 + (long)local_14 + 1)) {local_14 = local_14 + 1;}iVar2 = (local_14 - iVar1) + 1;local_14 = local_14 - iVar2;local_10 = iVar2 + iVar1;do {lVar3 = (long)local_c;*(char *)(param_1 + lVar3) = *(char *)(local_10 + param_1);local_10 = local_10 + 1;local_c = local_c + 1;} while (*(char *)(param_1 + lVar3) != '\0');}}}return;}