#include <stdio.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(int *)((long)local_10 * 0xc + param_3 + (long)local_c * 4) =*(int *)((long)local_10 * 0xc + param_2 + (long)local_c * 4) +*(int *)((long)local_10 * 0xc + param_1 + (long)local_c * 4);}}return;}