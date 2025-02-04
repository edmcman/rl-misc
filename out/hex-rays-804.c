
# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3, float a4)
{
__int64 result; // rax
int i; // [rsp+20h] [rbp-4h]

for ( i = 0; i <= 11; ++i )
*(_DWORD *)(4LL * i + a1) = 0;
*(float *)a1 = a2;
*(float *)(a1 + 20) = a3;
*(float *)(a1 + 40) = a4;
result = a1 + 60;
*(_DWORD *)(a1 + 60) = 1065353216;
return result;
}