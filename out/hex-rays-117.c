#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax

if ( *a2 == 8 )
{
*a4 = 0;
result = a3;
*a3 = *a1 + 1;
}
else
{
*a3 = *a1;
result = a4;
*a4 = *a2 + 1;
}
return result;
}