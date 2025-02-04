#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, float *a2, float *a3, float a4, float a5, float a6)
{
float v6; // xmm0_4
float v7; // xmm0_4
float v8; // xmm0_4
float v9; // xmm0_4
float v10; // xmm0_4
float v11; // xmm0_4
float v14; // [rsp+30h] [rbp-20h]
int i; // [rsp+34h] [rbp-1Ch]
float v16; // [rsp+38h] [rbp-18h]
float v17; // [rsp+3Ch] [rbp-14h]
float v18; // [rsp+40h] [rbp-10h]
float v19; // [rsp+44h] [rbp-Ch]
unsigned __int64 v20; // [rsp+48h] [rbp-8h]

v20 = __readfsqword(0x28u);
if ( a5 == 0.0 )
{
if ( a1 )
*a1 = a6;
if ( a2 )
*a2 = a6;
if ( a3 )
*a3 = a6;
}
else
{
if ( a6 >= 0.5 )
{
v14 = (float)(a6 + a5) - (float)(a6 * a5);
}
else
{
v6 = (a5 + 1.0) * a6;
v14 = v6;
}
v7 = a6 + a6 - v14;
v16 = v7;
v8 = a4 + 0.3333333333333333;
v17 = v8;
v18 = a4;
v9 = a4 - 0.3333333333333333;
v19 = v9;
for ( i = 0; i <= 2; ++i )
{
if ( *(&v17 + i) < 0.0 )
*(&v17 + i) = *(&v17 + i) + 1.0;
if ( *(&v17 + i) > 1.0 )
*(&v17 + i) = *(&v17 + i) - 1.0;
if ( *(&v17 + i) * 6.0 >= 1.0 )
{
if ( *(&v17 + i) + *(&v17 + i) >= 1.0 )
{
if ( *(&v17 + i) * 3.0 >= 2.0 )
{
*(&v17 + i) = v16;
}
else
{
v11 = 6.0 * ((float)(v14 - v16) * (0.6666666666666666 - *(&v17 + i))) + v16;
*(&v17 + i) = v11;
}
}
else
{
*(&v17 + i) = v14;
}
}
else
{
v10 = *(&v17 + i) * ((float)(v14 - v16) * 6.0) + v16;
*(&v17 + i) = v10;
}
}
if ( a1 )
*a1 = v17;
if ( a2 )
*a2 = v18;
if ( a3 )
*a3 = v19;
}
return __readfsqword(0x28u) ^ v20;
}