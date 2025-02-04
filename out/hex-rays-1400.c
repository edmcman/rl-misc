#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax
__int64 v5; // [rsp+20h] [rbp-30h]
int v6; // [rsp+40h] [rbp-10h]

if ( a1 <= 2299160 )
{
if ( a1 >= 0 )
LODWORD(v5) = a1;
else
v5 = 36525 * (a1 / -36525 + 1) + a1;
}
else
{
LODWORD(v5) = (int)(((double)((int)a1 - 1867216) - 0.25) / 36524.25)
+ a1
+ 1
- (int)(0.25 * (double)(int)(((double)((int)a1 - 1867216) - 0.25) / 36524.25));
}
v6 = (int)(0.25 * (double)(int)(((double)((int)v5 - 2438346) - 122.1) / 365.25 + 6680.0)
+ (double)(365 * (int)(((double)((int)v5 - 2438346) - 122.1) / 365.25 + 6680.0)));
*a3 = v5 + 1524 - v6 - (int)(30.6001 * (double)(int)((double)((int)v5 + 1524 - v6) / 30.6001));
*a2 = (int)((double)((int)v5 + 1524 - v6) / 30.6001) - 1;
if ( *a2 > 12 )
*a2 -= 12;
*a4 = (int)(((double)((int)v5 - 2438346) - 122.1) / 365.25 + 6680.0) - 4715;
if ( *a2 > 2 )
--*a4;
result = (unsigned int)*a4;
if ( (int)result <= 0 )
{
result = (__int64)a4;
--*a4;
}
if ( a1 < 0 )
result = -400 * (a1 / -36525 + 1);
return result;
}