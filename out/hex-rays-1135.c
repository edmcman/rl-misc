#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, char a2)
{
_DWORD *result; // rax

result = a1;
*a1 &= ~(1 << a2);
return result;
}