#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax

if ( (a1 & 3) != 0 || !(a1 % 100) && a1 % 400 )
dword_124 = 28;
else
dword_124 = 29;
*a3 = 1;
for ( *a4 = a2; ; *a4 -= days_per_month_4172[(*a3)++ - 1] )
{
result = (unsigned int)*a3;
if ( (int)result > 12 )
break;
result = days_per_month_4172[*a3 - 1];
if ( *a4 <= (int)result )
break;
}
return result;
}