#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>

# 1 
void func0(long param_1,int param_2){undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_14 = 0; local_14 < param_2 + -1; local_14 = local_14 + 1) {local_10 = *(int *)(param_1 + (long)local_14 * 4);for (local_c = local_14; local_c < param_2; local_c = local_c + 1) {if (*(int *)(param_1 + (long)local_c * 4) < local_10) {local_10 = *(int *)(param_1 + (long)local_c * 4);*(undefined4 *)(param_1 + (long)local_c * 4) = *(undefined4 *)(param_1 + (long)local_14 * 4);*(int *)((long)local_14 * 4 + param_1) = local_10;}}}return;}