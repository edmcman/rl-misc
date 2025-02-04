#include <stdio.h>										// We just need to include this for printf().

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

result = a1;
*a1 += 5;
return result;
}