#include <stdio.h>

#include <string.h>

#include <sys/time.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_18;undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {local_c = 0;for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {local_c = local_c + *(int *)((long)local_10 * 0x20 + param_2 + (long)local_14 * 4) **(int *)((long)local_18 * 0x20 + param_1 + (long)local_10 * 4);}*(int *)((long)local_18 * 0x20 + param_3 + (long)local_14 * 4) = local_c;}}return;}