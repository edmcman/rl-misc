#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
float  func0(__int64 *a1)
{
float result; // xmm0_4
int i; // [rsp+8h] [rbp-10h]
int v3; // [rsp+8h] [rbp-10h]

if ( *a1 <= 0 )
{
if ( *a1 < 0 )
*a1 = -*a1;
else
*a1 = 1LL;
idum2_3371 = *a1;
for ( i = 39; i >= 0; --i )
{
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
if ( i <= 31 )
iv_3373[i] = *a1;
}
iy_3372 = iv_3373[0];
}
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
idum2_3371 = 40692 * (idum2_3371 % 52774) - 3791 * (idum2_3371 / 52774);
idum2_3371 += idum2_3371 < 0 ? 0x7FFFFF07uLL : 0;
v3 = (int)iy_3372 / 67108862;
iy_3372 = iv_3373[(int)iy_3372 / 67108862] - idum2_3371;
iv_3373[v3] = *a1;
if ( iy_3372 <= 0 )
iy_3372 += 2147483562LL;
if ( (float)(4.6566129e-10 * (float)(int)iy_3372) <= 0.99999988 )
result = 4.6566129e-10 * (float)(int)iy_3372;
else
result = 0.99999988;
return result;
}