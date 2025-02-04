#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

result = a2;
*a2 = *a1 + 1;
return result;
}