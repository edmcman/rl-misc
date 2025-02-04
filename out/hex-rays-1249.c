
# 1 
#include "defs.h"
double  func0(__int64 *a1)
{
double result; // xmm0_8
int i; // [rsp+14h] [rbp-14h]
int v3; // [rsp+14h] [rbp-14h]

if ( *a1 <= 0 )
{
if ( *a1 < 0 )
*a1 = -*a1;
else
*a1 = 1LL;
idum2_1915 = *a1;
for ( i = 39; i >= 0; --i )
{
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
if ( i <= 31 )
iv_1917[i] = *a1;
}
iy_1916 = iv_1917[0];
}
*a1 = -12211 * (*a1 / 53668) + 40014 * (*a1 % 53668);
if ( *a1 < 0 )
*a1 += 2147483563LL;
idum2_1915 = 40692 * (idum2_1915 % 52774) - 3791 * (idum2_1915 / 52774);
idum2_1915 += idum2_1915 < 0 ? 0x7FFFFF07uLL : 0;
v3 = (int)iy_1916 / 67108862;
iy_1916 = iv_1917[(int)iy_1916 / 67108862] - idum2_1915;
iv_1917[v3] = *a1;
if ( iy_1916 <= 0 )
iy_1916 += 2147483562LL;
if ( 4.656613057391769e-10 * (double)(int)iy_1916 <= 0.99999988 )
result = 4.656613057391769e-10 * (double)(int)iy_1916;
else
result = 0.99999988;
return result;
}