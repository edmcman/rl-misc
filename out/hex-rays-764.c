#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, int *a2, int *a3)
{
unsigned __int64 result; // rax

if ( *a1 < -90 || *a1 > 90 )
*a1 = 0;
if ( *a2 < *a1 || *a2 > 90 )
*a2 = *a1;
if ( *a3 < *a2 || (result = (unsigned int)*a3, (int)result > 90) )
{
result = (unsigned __int64)a3;
*a3 = *a2;
}
return result;
}