#include <time.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float  func0(__int64 *a1, int a2)
{
__int64 v2; // kr00_8
float result; // xmm0_4
int i; // [rsp+Ch] [rbp-10h]

if ( a2 )
iy_3671 = 0LL;
if ( *a1 <= 0 || !iy_3671 )
{
if ( *a1 < 0 )
*a1 = -*a1;
else
*a1 = 1LL;
for ( i = 39; i >= 0; --i )
{
*a1 = -2836 * (*a1 / 127773) + 16807 * (*a1 % 127773);
if ( *a1 < 0 )
*a1 += 0x7FFFFFFFLL;
if ( i <= 31 )
iv_3672[i] = *a1;
}
iy_3671 = iv_3672[0];
}
*a1 = -2836 * (*a1 / 127773) + 16807 * (*a1 % 127773);
if ( *a1 < 0 )
*a1 += 0x7FFFFFFFLL;
v2 = iy_3671;
iy_3671 = iv_3672[(int)(iy_3671 / 0x4000000)];
iv_3672[(int)(v2 / 0x4000000)] = *a1;
result = 4.656612875245797e-10 * (double)(int)iy_3671;
if ( result > 0.99999988 )
result = 0.99999988;
return result;
}