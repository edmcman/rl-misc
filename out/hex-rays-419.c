#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, _DWORD *a2, int *a3, int *a4)
{
_DWORD *result; // rax

*a4 = (int)a1 % 75;
*a3 = (int)(a1 / 75) % 60;
result = a2;
*a2 = a1 / 75 / 60;
return result;
}