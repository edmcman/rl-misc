#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

*a1 = -1073741824;
result = a1 + 1;
a1[1] = 0x40000000;
return result;
}