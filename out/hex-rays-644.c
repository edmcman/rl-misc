
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 1; i <= 7; ++i )
*(float *)(4LL * i - 4 + a1) = *(float *)(4LL * i + a1) * (float)i;
result = a1 + 28;
*(_DWORD *)(a1 + 28) = 0;
return result;
}