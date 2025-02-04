#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

*a1 = 0;
a1[1] = 0;
result = a1 + 2;
a1[2] = 0;
return result;
}