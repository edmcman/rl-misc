#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-8h]
int j; // [rsp+18h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 4; ++j )
{
result = j;
*(_DWORD *)(20LL * i + a1 + 4LL * j) = a2 * *(_DWORD *)(a1 + 20LL * i + 4LL * j);
}
}
return result;
}