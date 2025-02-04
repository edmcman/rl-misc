
# 1 
#include "defs.h"
__int64  func0(double *a1, __int64 a2, __int64 a3, int a4, double *a5, double a6)
{
int v7; // eax
int v8; // eax
double *v9; // [rsp+28h] [rbp-38h]
double v10; // [rsp+48h] [rbp-18h]
double v11; // [rsp+50h] [rbp-10h]
double v12; // [rsp+58h] [rbp-8h]

v9 = a1 - 1;
if ( a4 == nsave_1918 )
{
if ( v9[klo_1920] <= a6 )
{
if ( a6 >= v9[khi_1919] )
{
v8 = khi_1919;
if ( a4 - 1 <= khi_1919 )
v8 = a4 - 1;
klo_1920 = v8;
khi_1919 = v8 + 1;
if ( a6 >= v9[v8 + 1] )
khi_1919 = a4;
if ( a6 > v9[khi_1919] )
return 2LL;
}
}
else
{
v7 = klo_1920;
if ( klo_1920 < 2 )
v7 = 2;
khi_1919 = v7;
klo_1920 = v7 - 1;
if ( v9[v7 - 1] > a6 )
klo_1920 = 1;
if ( v9[klo_1920] > a6 )
return 1LL;
}
}
else
{
nsave_1918 = a4;
klo_1920 = 1;
khi_1919 = a4;
if ( *a1 > a6 )
return 1LL;
if ( a6 > v9[khi_1919] )
return 2LL;
}
while ( khi_1919 - klo_1920 > 1 )
{
if ( v9[(khi_1919 + klo_1920) / 2] <= a6 )
klo_1920 = (khi_1919 + klo_1920) / 2;
else
khi_1919 = (khi_1919 + klo_1920) / 2;
}
v10 = v9[khi_1919] - v9[klo_1920];
if ( v10 <= 0.0 )
return 3LL;
v11 = (v9[khi_1919] - a6) / v10;
v12 = (a6 - v9[klo_1920]) / v10;
*a5 = v10
* v10
* ((v11 * v11 - 1.0) * v11 * *(double *)(8LL * klo_1920 + a3 - 8)
+ *(double *)(8LL * khi_1919 + a3 - 8) * ((v12 * v12 - 1.0) * v12))
/ 6.0
+ *(double *)(8LL * klo_1920 + a2 - 8) * v11
+ *(double *)(8LL * khi_1919 + a2 - 8) * v12;
return 0LL;
}