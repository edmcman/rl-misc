#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, int a3, int a4, float a5, float a6, float a7, float a8, float a9)
{
float result; // xmm0_4
int i; // [rsp+30h] [rbp-2Ch]
int j; // [rsp+34h] [rbp-28h]
float v12; // [rsp+38h] [rbp-24h]
float v13; // [rsp+3Ch] [rbp-20h]
int v14; // [rsp+40h] [rbp-1Ch]
int v15; // [rsp+4Ch] [rbp-10h]
int v16; // [rsp+50h] [rbp-Ch]
float v17; // [rsp+58h] [rbp-4h]

v12 = 0.0;
v13 = 0.0;
for ( i = 50; i < a3 - 50; ++i )
{
v14 = (int)((float)((float)((float)i * a5) + a6) + 0.5);
for ( j = 50; j < a4 - 50; ++j )
{
if ( *(_DWORD *)(4LL * (a3 * j + i) + a1) == 1 )
{
v15 = i + v14;
v16 = j + (int)((float)((float)((float)i * a7) + a8) + 0.5);
if ( i + v14 >= 0 && v15 < a3 && v16 >= 0 && v16 < a4 && *(_DWORD *)(4LL * (a3 * v16 + v15) + a1) == 2 )
{
v17 = (float)(*(float *)(4LL * (a3 * v16 + v15) + a2) * a9) - *(float *)(4LL * (a3 * j + i) + a2);
v12 = (float)(v17 * v17) + v12;
v13 = v13 + 1.0;
}
}
}
}
if ( v13 > 0.0 )
result = v12 / v13;
else
result = 1.0e30;
return result;
}