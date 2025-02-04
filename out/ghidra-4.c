#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_c;for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(long *)(param_1 + (long)local_c * 8) =*(long *)(param_3 + (long)local_c * 8) + *(long *)(param_2 + (long)local_c * 8) * 2;}return;}