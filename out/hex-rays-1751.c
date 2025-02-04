
# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float a4, float a5, float a6)
{
double v6; // xmm0_8
double v7; // xmm0_8
float v8; // xmm0_4
float v9; // xmm0_4
float v10; // xmm0_4
float *result; // rax
double v12; // [rsp+30h] [rbp-58h]
double v13; // [rsp+38h] [rbp-50h]
double v14; // [rsp+38h] [rbp-50h]
double v15; // [rsp+40h] [rbp-48h]
double v16; // [rsp+48h] [rbp-40h]
double v17; // [rsp+50h] [rbp-38h]
double v18; // [rsp+58h] [rbp-30h]
double v19; // [rsp+70h] [rbp-18h]
double v20; // [rsp+78h] [rbp-10h]
double v21; // [rsp+80h] [rbp-8h]

v15 = a4;
v16 = a5;
v17 = a6;
if ( a4 <= (double)a5 )
v6 = a5;
else
v6 = a4;
if ( v6 <= v17 )
v6 = a6;
v18 = v6;
if ( v16 <= v15 )
v7 = a5;
else
v7 = v15;
if ( v17 <= v7 )
v7 = a6;
if ( v18 == 0.0 )
v12 = 0.0;
else
v12 = (v18 - v7) / v18;
if ( v12 == 0.0 )
{
v14 = 0.0;
}
else
{
v19 = (v18 - v15) / (v18 - v7);
v20 = (v18 - v16) / (v18 - v7);
v21 = (v18 - v17) / (v18 - v7);
if ( v15 == v18 )
{
v13 = v21 - v20;
}
else if ( v16 == v18 )
{
v13 = v19 + 2.0 - v21;
}
else if ( v17 == v18 )
{
v13 = v20 + 4.0 - v19;
}
v14 = 60.0 * v13;
if ( v14 < 0.0 )
v14 = v14 + 360.0;
}
v8 = v14 / 360.0;
*a1 = v8;
v9 = v12;
*a2 = v9;
v10 = v18;
result = a3;
*a3 = v10;
return result;
}