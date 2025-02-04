#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_c;for (local_c = 0; local_c < 3; local_c = local_c + 1) {if ((*(uint *)(param_2 + (long)local_c * 4) & 1) == 0) {*(int *)(param_1 + (long)local_c * 4) = *(int *)(param_2 + (long)local_c * 4) / 2;}else {*(int *)(param_1 + (long)local_c * 4) = (*(int *)(param_2 + (long)local_c * 4) + -1) / 2;}*(uint *)(param_1 + (long)local_c * 4) =*(int *)(param_1 + (long)local_c * 4) -*(int *)(param_3 + (long)local_c * 4) *(uint)(*(int *)(param_3 + (long)local_c * 4) / 2 < *(int *)(param_1 + (long)local_c * 4));}return;}