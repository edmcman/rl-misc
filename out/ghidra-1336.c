
# 1 
void func0(long param_1,long param_2){undefined4 local_c;for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(int *)((long)local_c * 4 + param_1) =*(int *)(param_1 + (long)local_c * 4) % *(int *)(param_2 + (long)local_c * 4);if (*(int *)(param_1 + (long)local_c * 4) < 0) {*(int *)(param_1 + (long)local_c * 4) =*(int *)(param_2 + (long)local_c * 4) + *(int *)(param_1 + (long)local_c * 4);}}return;}