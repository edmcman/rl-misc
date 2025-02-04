
# 1 
#include "defs.h"
volatile signed __int32 * func0(volatile signed __int32 *a1, unsigned int a2)
{
volatile signed __int32 *result; // rax

result = a1;
_InterlockedAdd(a1, a2);
return result;
}