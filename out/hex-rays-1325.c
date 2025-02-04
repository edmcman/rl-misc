
# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, int a3)
{
float v4; // [rsp+1Ch] [rbp-8h]
int i; // [rsp+20h] [rbp-4h]

v4 = 0.0;
for ( i = 0; i < a3; ++i )
v4 = (float)(*(float *)(4LL * i + a2) * *(float *)(4LL * i + a1)) + v4;
return v4;
}