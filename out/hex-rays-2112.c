#include <stdlib.h>

#include <sched.h>

# 1 
#include "defs.h"
signed __int64  func0(volatile signed __int64 *a1, unsigned __int64 a2)
{
return _InterlockedExchangeAdd64(a1, a2);
}