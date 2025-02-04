#include <unistd.h>

#include <string.h>

# 1 
void func0(long param_1,int param_2){*(int *)(param_1 + ((long)param_2 + 1) * 4) =*(int *)(param_1 + ((long)param_2 + 1) * 4) + *(int *)(param_1 + (long)param_2 * 4) / 10;*(int *)((long)param_2 * 4 + param_1) = *(int *)(param_1 + (long)param_2 * 4) % 10;return;}