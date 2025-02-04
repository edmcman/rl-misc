#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
_DWORD *result; // rax

*a5 = a2 + *a1;
a5[1] = a1[1] + a3;
result = a5 + 2;
a5[2] = a1[2] + a4;
return result;
}