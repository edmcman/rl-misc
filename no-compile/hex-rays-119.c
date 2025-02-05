#include <stdlib.h>

#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
float  func0(__int64 *a1)
{
int i; // [rsp+Ch] [rbp-1Ch]
int k; // [rsp+Ch] [rbp-1Ch]
int j; // [rsp+10h] [rbp-18h]
__int64 v5; // [rsp+18h] [rbp-10h]
__int64 v6; // [rsp+18h] [rbp-10h]
unsigned __int64 v7; // [rsp+18h] [rbp-10h]
unsigned __int64 v8; // [rsp+20h] [rbp-8h]

if ( *a1 < 0 || !iff_3889 )
{
iff_3889 = 1;
v5 = (__int64)(161803398 - abs64(*a1)) % 1000000000;
qword_518 = v5;
v8 = 1LL;
for ( i = 1; i <= 54; ++i )
{
ma_3888[21 * i % 55] = v8;
v8 = v5 - v8 + ((__int64)(v5 - v8) < 0 ? 0x3B9ACA00uLL : 0);
v5 = ma_3888[21 * i % 55];
}
for ( j = 1; j <= 4; ++j )
{
for ( k = 1; k <= 55; ++k )
{
ma_3888[k] -= ma_3888[(k + 30) % 55 + 1];
if ( ma_3888[k] < 0 )
ma_3888[k] += 1000000000LL;
}
}
inext_3886 = 0;
inextp_3887 = 31;
*a1 = 1LL;
}
if ( ++inext_3886 == 56 )
inext_3886 = 1;
if ( ++inextp_3887 == 56 )
inextp_3887 = 1;
v6 = ma_3888[inext_3886] - ma_3888[inextp_3887];
v7 = v6 + (v6 < 0 ? 0x3B9ACA00uLL : 0);
ma_3888[inext_3886] = v7;
return 0.000000001 * (double)(int)v7;
}