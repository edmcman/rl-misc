#include <math.h>

#include <float.h>

#include <stdbool.h>

#include <stdlib.h>

#include <string.h>

#include <time.h>

#include <stdio.h>

# 1 
float func0(long param_1,long param_2,int param_3){undefined4 local_10;undefined4 local_c;local_10 = 0.0;for (local_c = 0; local_c < param_3; local_c = local_c + 1) {local_10 = *(float *)(param_2 + (long)local_c * 4) * *(float *)(param_1 + (long)local_c * 4) +local_10;}return local_10 / (float)param_3;}