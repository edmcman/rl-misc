#include <stdio.h>

# 1 
void func0(long param_1){undefined uVar1;int iVar2;undefined4 local_10;undefined4 local_c;for (local_10 = 0; *(char *)(param_1 + local_10) != '\0'; local_10 = local_10 + 1) {}iVar2 = local_10 + -1;if (*(char *)(param_1 + (local_10 + -1)) == '\n') {iVar2 = local_10 + -2;}local_10 = iVar2;for (local_c = 0; local_c < local_10; local_c = local_c + 1) {uVar1 = *(undefined *)(param_1 + local_c);*(undefined *)(param_1 + local_c) = *(undefined *)(param_1 + local_10);*(undefined *)(local_10 + param_1) = uVar1;local_10 = local_10 + -1;}return;}