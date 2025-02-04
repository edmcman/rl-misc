#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
long func0(long param_1){undefined4 uVar1;bool bVar2;int iVar3;undefined4 local_18;undefined4 local_10;local_18 = 0;iVar3 = local_18;do {local_18 = iVar3;iVar3 = local_18 + 1;} while (*(int *)(param_1 + (long)local_18 * 4) != 0);bVar2 = true;while (bVar2) {bVar2 = false;for (local_10 = 0; local_10 < local_18 + -1; local_10 = local_10 + 1) {if (*(int *)(param_1 + ((long)local_10 + 1) * 4) < *(int *)(param_1 + (long)local_10 * 4)) {uVar1 = *(undefined4 *)(param_1 + (long)local_10 * 4);*(undefined4 *)(param_1 + (long)local_10 * 4) =*(undefined4 *)(param_1 + ((long)local_10 + 1) * 4);*(undefined4 *)(((long)local_10 + 1) * 4 + param_1) = uVar1;bVar2 = true;}}}return param_1;}