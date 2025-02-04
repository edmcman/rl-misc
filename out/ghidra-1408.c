#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <limits.h>

#include <time.h>

# 1 
void func0(double *param_1,long param_2,long param_3,ulong param_4){undefined4 local_c;*param_1 = 0.0;for (local_c = 0; (ulong)(long)local_c < param_4; local_c = local_c + 1) {*param_1 = *(double *)(param_3 + (long)local_c * 8) * *(double *)(param_2 + (long)local_c * 8) +*param_1;}return;}