#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

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
idum2_4068 = *a1;
else
*a1 = 1LL;
for ( i = 39; i >= 0; --i )
{
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
if ( i <= 31 )
iv_4070[i] = *a1;
}
iy_4069 = iv_4070[0];
}
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
idum2_4068 = 40692 * (idum2_4068 % 52774) - 3791 * (idum2_4068 / 52774);
idum2_4068 += idum2_4068 < 0 ? 0x7FFFFF07uLL : 0;
v3 = (int)iy_4069 / 67108862;
iy_4069 = iv_4070[(int)iy_4069 / 67108862] - idum2_4068;
iv_4070[v3] = *a1;
if ( iy_4069 <= 0 )
iy_4069 += 2147483562LL;
result = 4.656613057391769e-10 * (double)(int)iy_4069;
if ( result > 0.99999988 )
result = 0.99999988;
return result;
}