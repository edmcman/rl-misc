#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+10h] [rbp-10h]
int j; // [rsp+14h] [rbp-Ch]
int v5; // [rsp+18h] [rbp-8h]
unsigned int v6; // [rsp+1Ch] [rbp-4h]

for ( i = 1; i <= 15; ++i )
{
v5 = *(_DWORD *)(4LL * i + a1);
v6 = *(_DWORD *)(4LL * i + a2);
for ( j = i; j > 0 && v5 < *(_DWORD *)(4LL * j - 4 + a1); --j )
{
*(_DWORD *)(4LL * j + a1) = *(_DWORD *)(4LL * j - 4 + a1);
*(_DWORD *)(4LL * j + a2) = *(_DWORD *)(4LL * j - 4 + a2);
}
*(_DWORD *)(a1 + 4LL * j) = v5;
result = v6;
*(_DWORD *)(a2 + 4LL * j) = v6;
}
return result;
}