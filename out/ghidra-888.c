#include <stdio.h>

# 1 
void func0(long param_1,long param_2,int param_3){char cVar1;int local_10;for (local_10 = 1; local_10 < param_3 + -1; local_10 = local_10 + 1) {cVar1 = *(int *)(param_1 + (long)local_10 * 4 + -4) == 1;if (*(int *)(param_1 + ((long)local_10 + 1) * 4) == 1) {cVar1 = cVar1 + '\x01';}if (cVar1 == '\x01') {*(undefined4 *)(param_2 + (long)local_10 * 4) = 1;}}return;}