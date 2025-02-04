#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+14h] [rbp-Ch]
int j; // [rsp+18h] [rbp-8h]
int k; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
{
for ( k = 0; k <= 2; ++k )
{
result = k + 3LL * j;
*(_DWORD *)(36LL * i + a1 + 4 * result) = *(_DWORD *)(36LL * i + a2 + 4LL * (3 * j + k));
}
}
}
return result;
}