#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <time.h>

#include <sys/timeb.h>

# 1 
int func0(float param_1,long param_2,int param_3){undefined4 local_10;undefined4 local_c;local_10 = param_3;if (param_1 < *(float *)(param_2 + (long)param_3 * 4)) {for (local_c = 1; local_c <= param_3; local_c = local_c + 1) {if (param_1 <= *(float *)(param_2 + (long)local_c * 4)) {local_10 = local_c + -1;local_c = param_3 + 1;}}}return local_10;}