#include <stdlib.h>

#include <sched.h>

# 1 
#include "defs.h"
volatile signed __int32 * func0(volatile signed __int32 *a1)
{
volatile signed __int32 *result; // rax

result = a1;
_InterlockedDecrement(a1);
return result;
}