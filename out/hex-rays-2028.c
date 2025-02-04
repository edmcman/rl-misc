#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BOOL8  func0(_DWORD *a1, _DWORD *a2, int *a3, int *a4, int a5, int a6, int a7, int a8)
{
if ( a5 > *a1 )
{
*a3 -= a5 - *a1;
*a1 = a5;
}
if ( a6 > *a2 )
{
*a4 -= a6 - *a2;
*a2 = a6;
}
if ( *a1 + *a3 > a5 + a7 )
*a3 = a7 + a5 - *a1;
if ( *a2 + *a4 > a6 + a8 )
*a4 = a8 + a6 - *a2;
return *a3 > 0 && *a4 > 0;
}