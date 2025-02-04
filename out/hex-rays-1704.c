#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax

*a2 = BYTE2(a1);
*a3 = BYTE1(a1);
result = a4;
*a4 = (unsigned __int8)a1;
return result;
}