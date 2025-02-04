#include <math.h>

#include <assert.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, _DWORD *a2)
{
int v2; // eax
int v4; // [rsp+14h] [rbp-Ch]

v2 = (*a2)++;
if ( v2 > 15 )
return 48LL;
v4 = (int)*a1;
*a1 = 10.0 * (*a1 - (double)v4);
return (unsigned int)(v4 + 48);
}