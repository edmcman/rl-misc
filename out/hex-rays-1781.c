
# 1 
#include "defs.h"
float  func0(int a1, int a2, __int64 a3, __int16 a4, __int64 a5, __int16 a6, __int64 a7)
{
int j; // [rsp+28h] [rbp-28h]
int i; // [rsp+2Ch] [rbp-24h]
double v10; // [rsp+30h] [rbp-20h]

v10 = 0.0;
for ( i = 0; i < a1; ++i )
{
if ( (((int)(unsigned __int16)(a6 & a4) >> i) & 1) != 0 )
{
for ( j = 0; j < a2; ++j )
v10 = (float)(*(float *)(4LL * j + 4LL * a2 * i + a3)
* (float)(*(float *)(4LL * j + 4LL * a2 * i + a5) * *(float *)(4LL * j + 4LL * a2 * i + a7)))
+ v10;
}
}
return v10 / (double)a2;
}