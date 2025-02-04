#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int func0(long param_1,int param_2,int param_3,long param_4){undefined4 local_10;undefined4 local_c;local_c = 0;for (local_10 = 1; local_10 <= param_2; local_10 = local_10 + 1) {if (param_3 == *(int *)(param_1 + (long)local_10 * 4)) {local_c = local_c + 1;*(int *)((long)local_c * 4 + param_4) = local_10;}}return local_c;}