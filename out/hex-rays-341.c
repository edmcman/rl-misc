
# 1 
#include "defs.h"
_BOOL8  func0(int a1, __int64 a2, __int64 a3, float a4, float a5)
{
int v5; // eax
int v7; // [rsp+20h] [rbp-Ch]
int v8; // [rsp+24h] [rbp-8h]
_BOOL4 v9; // [rsp+28h] [rbp-4h]

v9 = 0;
v7 = 0;
v8 = a1 - 1;
while ( v7 < a1 )
{
if ( *(float *)(4LL * v7 + a3) > a5 != *(float *)(4LL * v8 + a3) > a5
&& (float)(*(float *)(4LL * v7 + a2)
+ (float)((float)((float)(a5 - *(float *)(4LL * v7 + a3))
* (float)(*(float *)(4LL * v8 + a2) - *(float *)(4LL * v7 + a2)))
/ (float)(*(float *)(4LL * v8 + a3) - *(float *)(4LL * v7 + a3)))) > a4 )
{
v9 = !v9;
}
v5 = v7++;
v8 = v5;
}
return v9;
}