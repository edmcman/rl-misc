#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <sys/time.h>

#include <stdint.h>

#include <emmintrin.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined4 local_c;for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {*(float *)(param_1 + (long)local_c * 4) = (float)(local_c + 1);*(float *)(param_2 + (long)local_c * 4) = (float)(local_c + 1);*(undefined4 *)(param_3 + (long)local_c * 4) = 0;}return;}