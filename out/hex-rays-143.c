




# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, __int64 a3, int a4, float *a5)
{
int i; // [rsp+20h] [rbp-10h]
int j; // [rsp+24h] [rbp-Ch]
unsigned int v8; // [rsp+28h] [rbp-8h]
float v9; // [rsp+2Ch] [rbp-4h]

v8 = 0;
*a5 = 9.9999999e14;
for ( i = 0; i < a2; ++i )
{
v9 = 0.0;
for ( j = 0; j < a4; ++j )
v9 = (float)((float)(*(float *)(4LL * j + a3) - *(float *)(4LL * (a4 * i + j) + a1))
* (float)(*(float *)(4LL * j + a3) - *(float *)(4LL * (a4 * i + j) + a1)))
+ v9;
if ( *a5 > v9 )
{
*a5 = v9;
v8 = i;
}
}
return v8;
}