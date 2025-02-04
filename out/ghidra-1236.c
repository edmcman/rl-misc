#include <stdio.h>

#include <stdlib.h>

#include <omp.h>

# 1 
void func0(long param_1,long param_2,int param_3,int param_4){undefined4 local_c;for (local_c = 1; local_c <= param_3; local_c = local_c + 1) {*(double *)(param_2 + (long)local_c * 8) =*(double *)(param_2 + (long)local_c * 8) +(double)param_4 * *(double *)(param_1 + (long)local_c * 8);}return;}