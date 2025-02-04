#include <signal.h>

#include <dlfcn.h>

#include <stddef.h>

#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

#include <execinfo.h>

#include <memory.h>

#include <stdarg.h>

# 1 
int func0(int *param_1,int param_2){int iVar1;LOCK();iVar1 = *param_1;*param_1 = *param_1 + param_2;UNLOCK();return param_2 + iVar1;}