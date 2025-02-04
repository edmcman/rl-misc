







# 1 
#include "defs.h"
double  func0(__int64 *a1)
{
int i; // ebx
int v2; // ebx
double result; // xmm0_8

if ( *a1 <= 0 || !iy_1915 )
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
iv_1916[i] = *a1;
}
iy_1915 = iv_1916[0];
}
*a1 = -2836 * (*a1 / 127773) + 16807 * (*a1 % 127773);
if ( *a1 < 0 )
*a1 += 0x7FFFFFFFLL;
v2 = iy_1915 / 0x4000000;
iy_1915 = iv_1916[v2];
iv_1916[v2] = *a1;
if ( 4.656612875245797e-10 * (double)(int)iy_1915 <= 0.99999999999994 )
result = 4.656612875245797e-10 * (double)(int)iy_1915;
else
result = 0.99999999999994;
return result;
}