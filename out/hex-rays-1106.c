#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a1 -= *a2;
*a2 += *a1;
result = a1;
*a1 = *a2 - *a1;
return result;
}