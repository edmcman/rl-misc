#include <stdio.h>

#include <stdint.h>

#include <time.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_c;for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {*(int *)(param_3 + (long)local_c * 4) =*(int *)(param_2 + (long)local_c * 4) + *(int *)(param_1 + (long)local_c * 4);}return;}