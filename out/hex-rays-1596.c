#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int j; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
{
result = j;
*(_QWORD *)(a2 + 24LL * i + 8LL * j) = *(_QWORD *)(24LL * i + a1 + 8LL * j);
}
}
return result;
}