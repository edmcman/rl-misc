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
#include "defs.h"
__int64  func0(volatile signed __int32 *a1, unsigned int a2)
{
return _InterlockedExchangeAdd(a1, a2) + a2;
}