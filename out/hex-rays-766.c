#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, int *a3, _DWORD *a4)
{
_DWORD *result; // rax

if ( a2 )
{
*a3 = a1 / a2;
result = a4;
*a4 = a1 - a2 * *a3;
}
else
{
*a3 = 0;
result = a4;
*a4 = 0;
}
return result;
}