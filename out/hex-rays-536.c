#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(signed int *a1, signed int *a2)
{
signed int v2; // edx

v2 = *a2;
if ( *a2 < *a1 )
v2 = *a1;
*a1 = v2;
*a2 = 0;
return (unsigned int)*a1;
}