#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+10h] [rbp-8h]
unsigned int v4; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 4; ++i )
{
for ( j = 0; j <= 4; ++j )
{
result = *(unsigned int *)(4LL * j + a1);
if ( *(_DWORD *)(4LL * i + a1) < (int)result )
{
v4 = *(_DWORD *)(4LL * i + a1);
*(_DWORD *)(4LL * i + a1) = *(_DWORD *)(4LL * j + a1);
result = v4;
*(_DWORD *)(a1 + 4LL * j) = v4;
}
}
}
return result;
}