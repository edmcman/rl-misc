#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
_DWORD *result; // rax

*a1 += a3;
result = a2;
*a2 += a4;
return result;
}