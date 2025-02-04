#include <stdlib.h>

#include <sched.h>

# 1 
long func0(long *param_1,long param_2){long lVar1;LOCK();lVar1 = *param_1;*param_1 = *param_1 + param_2;UNLOCK();return lVar1;}