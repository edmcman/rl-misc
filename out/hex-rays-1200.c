
# 1 
#include "defs.h"
float * func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float a5)
{
float *result; // rax
int i; // [rsp+30h] [rbp-8h]
float v7; // [rsp+34h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
v7 = *(float *)(4LL * i + a2) - *(float *)(4LL * i + a1);
*(_DWORD *)(a3 + 4LL * i) = (int)(float)(v7 / a5);
result = (float *)(4LL * i + a4);
*result = v7 / (float)*(int *)(4LL * i + a3);
}
return result;
}