#include <stdio.h>

#include <stdlib.h>

# 1 
long func0(long param_1){undefined uVar1;uint uVar2;undefined4 local_10;for (local_10 = 0; uVar2 = local_10, *(char *)(param_1 + (ulong)local_10) != '\0';local_10 = local_10 + 1) {}for (local_10 = 0; local_10 < uVar2 >> 1; local_10 = local_10 + 1) {uVar1 = *(undefined *)(param_1 + (ulong)local_10);*(undefined *)(param_1 + (ulong)local_10) =*(undefined *)(param_1 + (ulong)((uVar2 - local_10) - 1));*(undefined *)((ulong)((uVar2 - local_10) - 1) + param_1) = uVar1;}return param_1;}