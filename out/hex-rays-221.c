#include <stdlib.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
float v3; // xmm0_4
float v5; // [rsp+1Ch] [rbp-Ch]
unsigned __int64 i; // [rsp+20h] [rbp-8h]

v5 = 0.0;
for ( i = 0LL; i < a3; ++i )
v5 = (float)(*(float *)(4 * i + a1) * *(float *)(4 * i + a2)) + v5;
if ( (a3 & 0x8000000000000000LL) != 0LL )
v3 = (float)(int)(a3 & 1 | (a3 >> 1)) + (float)(int)(a3 & 1 | (a3 >> 1));
else
v3 = (float)(int)a3;
return v5 / v3;
}