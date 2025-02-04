#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void func0(double param_1,long param_2,long param_3){undefined4 local_10;undefined4 local_c;for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {for (local_c = 0; local_c < 4; local_c = local_c + 1) {*(double *)((long)local_10 * 0x20 + param_3 + (long)local_c * 8) =*(double *)((long)local_10 * 0x20 + param_2 + (long)local_c * 8) * param_1;}}return;}