#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

*a1 += *a3;
*a3 = *a1 - *a3;
*a1 -= *a3;
*a2 += *a3;
*a3 = *a2 - *a3;
result = a2;
*a2 -= *a3;
return result;
}