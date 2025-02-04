#include <math.h>

#include <string.h>

#include <stdio.h>

#include <math.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BOOL8  func0(int a1, int a2, double *a3, float a4)
{
_BOOL8 result; // rax
int v5; // [rsp+24h] [rbp-4h]

v5 = a1;
if ( a1 < 0 )
v5 = -a1;
*a3 = a4 / 3600.0 + (double)v5 + (double)a2 / 60.0;
if ( a1 < 0 )
*a3 = -*a3;
if ( *a3 >= -360.0 )
result = *a3 > 360.0;
else
result = 1LL;
return result;
}