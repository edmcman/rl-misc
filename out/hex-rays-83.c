#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+10h] [rbp-8h]
unsigned int v4; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (unsigned int)i;
for ( j = i; j <= 2; ++j )
{
v4 = *(_DWORD *)(4 * (3 * i + (__int64)j) + a1);
*(_DWORD *)(a1 + 4 * (3 * i + (__int64)j)) = *(_DWORD *)(4 * (3 * j + (__int64)i) + a1);
result = v4;
*(_DWORD *)(a1 + 4 * (3 * j + (__int64)i)) = v4;
}
}
return result;
}