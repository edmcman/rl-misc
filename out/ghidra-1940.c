#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2,int param_3){int local_10;int local_c;for (local_10 = 1; local_c = local_10, local_10 < param_3; local_10 = local_10 + 1) {while (local_c = local_c + -1, -1 < local_c) {if ((*(int *)(param_1 + (long)local_c * 4) < *(int *)(param_1 + (long)local_10 * 4)) &&(*(int *)(param_2 + (long)local_10 * 4) <= *(int *)(param_2 + (long)local_c * 4))) {*(int *)(param_2 + (long)local_10 * 4) = *(int *)(param_2 + (long)local_c * 4) + 1;}}}return;}