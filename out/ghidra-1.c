#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
void func0(long param_1,long param_2){undefined4 local_c;for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(double *)(param_1 + (long)local_c * 8) =*(double *)(param_2 + (long)local_c * 8) +*(double *)(param_1 + (long)local_c * 8) / *(double *)(param_2 + (long)(local_c + 3) * 8);}return;}