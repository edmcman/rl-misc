#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a1 = 1;
result = a2;
*a2 = 2;
return result;
}