




# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float a3, float a4, float a5)
{
float v5; // xmm0_4
float *result; // rax
float v7; // [rsp+14h] [rbp-2Ch]
float v8; // [rsp+18h] [rbp-28h]
float v9; // [rsp+20h] [rbp-20h]
float v10; // [rsp+24h] [rbp-1Ch]
float v11; // [rsp+28h] [rbp-18h]
float v12; // [rsp+2Ch] [rbp-14h]
float v13; // [rsp+30h] [rbp-10h]
float v14; // [rsp+34h] [rbp-Ch]
int v15; // [rsp+38h] [rbp-8h]

v11 = 1.7320508 * a3;
v12 = 1.5 * a3;
v13 = (float)(1.7320508 * a3) / 2.0;
v14 = (float)(1.5 * a3) / 2.0;
v5 = a5 - a3 / 5.3;
if ( v5 <= 0.0 )
v7 = v5 - v14;
else
v7 = v5 + v14;
if ( a4 <= 0.0 )
v8 = a4 - v13;
else
v8 = a4 + v13;
v15 = (int)(float)(v7 / v12);
*a2 = (float)v15 * v12;
*a1 = (float)(int)(float)(v8 / v11) * v11;
v10 = v7 - *a2;
v9 = v8 - *a1;
if ( v10 < 0.0 )
v10 = v10 + v12;
if ( v9 < 0.0 )
v9 = v9 + v11;
result = (float *)(v15 & 1);
if ( (v15 & 1) != 0 )
{
if ( v13 < v9 )
{
if ( (float)(v12 - (float)((float)(v11 - v9) * 0.43301269)) <= v10 )
{
result = a2;
*a2 = *a2 + v12;
}
else
{
result = a1;
*a1 = *a1 + v13;
}
}
else if ( (float)(v12 - (float)(v9 * 0.43301269)) <= v10 )
{
result = a2;
*a2 = *a2 + v12;
}
else
{
result = a1;
*a1 = *a1 - v13;
}
}
else if ( v10 <= (float)(v12 - (float)((float)(v13 - v9) * 0.43301269)) )
{
if ( v10 > (float)(v12 - (float)((float)(v9 - v13) * 0.43301269)) )
{
*a2 = *a2 + v12;
result = a1;
*a1 = *a1 + v13;
}
}
else
{
*a2 = *a2 + v12;
result = a1;
*a1 = *a1 - v13;
}
return result;
}