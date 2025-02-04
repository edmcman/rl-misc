
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int j; // [rsp+20h] [rbp-8h]
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = j;
*(float *)(a1 + 16LL * i + 4LL * j) = *(float *)(a3 + 16LL * i + 4LL * j) + *(float *)(a2 + 16LL * i + 4LL * j);
}
}
return result;
}