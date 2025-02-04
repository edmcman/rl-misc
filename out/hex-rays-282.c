#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(char a1, _DWORD *a2, int a3)
{
_DWORD *result; // rax

result = a2;
*a2 |= a3 << (a1 - 1);
return result;
}