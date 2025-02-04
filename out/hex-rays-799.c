#include <stdio.h>

# 1 
#include "defs.h"
_WORD * func0(_WORD *a1, __int16 a2)
{
_WORD *result; // rax

result = a1;
*a1 = a2;
return result;
}