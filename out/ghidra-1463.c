#include <pthread.h>

#include <sys/time.h>

#include <unistd.h>

#include <stdlib.h>

#include <malloc.h>

#include <math.h>

# 1 
void func0(long param_1,long param_2,long param_3){undefined8 local_10;*(long *)(param_1 * 8 + param_2) = param_1;if (param_3 == 1) {for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {*(long *)(local_10 * 8 + param_2) = local_10;}}return;}