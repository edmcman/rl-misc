#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
_DWORD *result; // rax

*a5 = a4 * a1 - a2 * a3;
result = a6;
*a6 = a4 * a2;
return result;
}