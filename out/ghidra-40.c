#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {*(undefined8 *)(param_3 + (long)local_10 * 8) = 0;for (local_c = 0; local_c < 3; local_c = local_c + 1) {*(double *)(param_3 + (long)local_10 * 8) =*(double *)(param_2 + (long)local_c * 8) **(double *)((long)local_10 * 0x18 + param_1 + (long)local_c * 8) +*(double *)(param_3 + (long)local_10 * 8);}}return;}