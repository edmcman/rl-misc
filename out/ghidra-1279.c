#include <stdio.h>

# 1 
void func0(long param_1,long param_2){undefined4 local_c;for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {*(uint *)(param_1 + (long)local_c * 4) =*(uint *)(param_2 + (long)local_c * 4) ^ *(uint *)(param_1 + (long)local_c * 4);}return;}