#include <assert.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <float.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5, int a6)
{
_DWORD *result; // rax

*a3 = -1;
if ( a5 == *a4 || a6 == *a4 )
{
if ( a5 == a4[1] || a6 == a4[1] )
{
*a3 = 0;
*a1 = *a4;
result = a2;
*a2 = a4[1];
}
else
{
*a3 = 2;
*a1 = a4[2];
result = a2;
*a2 = *a4;
}
}
else
{
*a3 = 1;
*a1 = a4[1];
result = a2;
*a2 = a4[2];
}
return result;
}