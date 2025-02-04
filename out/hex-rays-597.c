#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
void  func0(double *a1)
{
float v1; // xmm0_4
float v2; // xmm0_4
float v3; // xmm0_4
double v4; // xmm0_8
float v5; // xmm0_4
unsigned int v6; // eax
double v7; // xmm0_8
float v8; // xmm0_4
float v9; // [rsp+8h] [rbp-10h]
float v10; // [rsp+8h] [rbp-10h]
float v11; // [rsp+8h] [rbp-10h]
float v12; // [rsp+8h] [rbp-10h]
float v13; // [rsp+8h] [rbp-10h]
unsigned int i; // [rsp+Ch] [rbp-Ch]
unsigned int j; // [rsp+Ch] [rbp-Ch]
unsigned int ii; // [rsp+Ch] [rbp-Ch]
unsigned int ll; // [rsp+Ch] [rbp-Ch]
unsigned int i1; // [rsp+Ch] [rbp-Ch]
unsigned int k; // [rsp+10h] [rbp-8h]
unsigned int m; // [rsp+10h] [rbp-8h]
unsigned int jj; // [rsp+10h] [rbp-8h]
unsigned int mm; // [rsp+10h] [rbp-8h]
unsigned int i2; // [rsp+10h] [rbp-8h]
unsigned int l; // [rsp+14h] [rbp-4h]
unsigned int n; // [rsp+14h] [rbp-4h]
unsigned int kk; // [rsp+14h] [rbp-4h]
unsigned int nn; // [rsp+14h] [rbp-4h]
unsigned int i3; // [rsp+14h] [rbp-4h]

for ( i = 1; i <= 3; ++i )
a1[4 * i] = a1[4 * i] / *a1;
for ( j = 1; j <= 3; ++j )
{
for ( k = j; k <= 3; ++k )
{
v9 = 0.0;
for ( l = 0; l < j; ++l )
{
v1 = a1[4 * j + l] * a1[4 * l + k] + v9;
v9 = v1;
}
a1[4 * j + k] = a1[4 * j + k] - v9;
}
if ( j != 3 )
{
for ( m = j + 1; m <= 3; ++m )
{
v10 = 0.0;
for ( n = 0; n < j; ++n )
{
v2 = a1[4 * m + n] * a1[4 * n + j] + v10;
v10 = v2;
}
a1[4 * m + j] = (a1[4 * m + j] - v10) / a1[5 * j];
}
}
}
for ( ii = 0; ii <= 3; ++ii )
{
for ( jj = ii; jj <= 3; ++jj )
{
v11 = 1.0;
if ( ii != jj )
{
v11 = 0.0;
for ( kk = ii; kk < jj; ++kk )
{
v3 = v11 - a1[4 * ii + kk] * a1[4 * kk + jj];
v11 = v3;
}
}
a1[4 * ii + jj] = v11 / a1[5 * jj];
}
}
for ( ll = 0; ll <= 3; ++ll )
{
for ( mm = ll; mm <= 3; ++mm )
{
if ( ll != mm )
{
v12 = 0.0;
for ( nn = ll; nn < mm; ++nn )
{
if ( ll == nn )
v4 = 1.0;
else
v4 = a1[4 * nn + ll];
v5 = v4 * a1[4 * mm + nn] + v12;
v12 = v5;
}
a1[4 * mm + ll] = (float)-v12;
}
}
}
for ( i1 = 0; i1 <= 3; ++i1 )
{
for ( i2 = 0; i2 <= 3; ++i2 )
{
v13 = 0.0;
v6 = i1;
if ( i2 >= i1 )
v6 = i2;
for ( i3 = v6; i3 <= 3; ++i3 )
{
if ( i2 == i3 )
v7 = 1.0;
else
v7 = a1[4 * i3 + i2];
v8 = v7 * a1[4 * i1 + i3] + v13;
v13 = v8;
}
a1[4 * i1 + i2] = v13;
}
}
}