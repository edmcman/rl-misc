#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
void func0(double *param_1,long param_2,int param_3){int local_1c;double local_18;double local_10;local_18 = 0.0;local_10 = 0.0;for (local_1c = 0; local_1c < param_3 * 2; local_1c = local_1c + 2) {local_18 = *(double *)(param_2 + (long)local_1c * 8) + local_18;local_10 = *(double *)(param_2 + ((long)local_1c + 1) * 8) + local_10;}*param_1 = local_18 / (double)param_3;param_1[1] = local_10 / (double)param_3;return;}