#include <math.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BOOL8  func0(float *a1, __int64 a2, __int64 a3)
{
float v3; // xmm0_4
_BOOL8 result; // rax
int i; // [rsp+28h] [rbp-28h]
float v6; // [rsp+2Ch] [rbp-24h]
int v7[3]; // [rsp+30h] [rbp-20h]
int v8[3]; // [rsp+3Ch] [rbp-14h]
unsigned __int64 v9; // [rsp+48h] [rbp-8h]

v9 = __readfsqword(0x28u);
for ( i = 0; i <= 2; ++i )
{
v6 = *(float *)(4LL * i + a2);
if ( a1[i] <= 0.0 )
{
*(float *)&v7[i] = *(float *)(4LL * i + a3) - v6;
v3 = -*(float *)(4LL * i + a3);
}
else
{
*(float *)&v7[i] = (float)-*(float *)(4LL * i + a3) - v6;
v3 = *(float *)(4LL * i + a3);
}
*(float *)&v8[i] = v3 - v6;
}
if ( (float)((float)(*(float *)&v7[2] * a1[2])
+ (float)((float)(*a1 * *(float *)v7) + (float)(*(float *)&v7[1] * a1[1]))) <= 0.0 )
result = (float)((float)(*(float *)&v8[2] * a1[2])
+ (float)((float)(*a1 * *(float *)v8) + (float)(*(float *)&v8[1] * a1[1]))) >= 0.0;
else
result = 0LL;
return result;
}