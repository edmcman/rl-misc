#include <stdlib.h>

#include <sched.h>

# 1 
void func0(int *param_1){LOCK();*param_1 = *param_1 + 1;UNLOCK();return;}