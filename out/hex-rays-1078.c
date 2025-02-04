#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+8h] [rbp-10h]
int v3; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+10h] [rbp-8h]
int v5; // [rsp+14h] [rbp-4h]

v3 = 10;
for ( i = 1; i <= 9; ++i )
{
for ( j = 0; ; ++j )
{
result = (unsigned int)(v3 - 1);
if ( j >= (int)result )
break;
if ( *(_DWORD *)(4LL * j + a1) > *(_DWORD *)(4 * (j + 1LL) + a1) )
{
v5 = *(_DWORD *)(4LL * j + a1);
*(_DWORD *)(4LL * j + a1) = *(_DWORD *)(4 * (j + 1LL) + a1);
*(_DWORD *)(a1 + 4 * (j + 1LL)) = v5;
}
}
--v3;
}
return result;
}