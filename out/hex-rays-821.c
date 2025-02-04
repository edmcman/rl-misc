
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int j; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
result = i;
*(_QWORD *)(a2 + 32LL * j + 8LL * i) = *(_QWORD *)(32LL * i + a1 + 8LL * j);
}
}
return result;
}