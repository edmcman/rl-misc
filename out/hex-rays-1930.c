
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int j; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = j;
*(float *)(a1 + 16LL * i + 4LL * j) = -*(float *)(a1 + 16LL * i + 4LL * j);
}
}
return result;
}