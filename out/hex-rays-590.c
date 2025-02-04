#include <stdio.h>

#include <stdlib.h>

#include <sys/time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
__int64 result; // rax
int i; // [rsp+10h] [rbp-Ch]
int v4; // [rsp+14h] [rbp-8h]
int j; // [rsp+18h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = (unsigned int)(a2 - 1);
if ( i >= (int)result )
break;
v4 = *(_DWORD *)(4LL * i + a1);
for ( j = i; a2 > j; ++j )
{
if ( v4 > *(_DWORD *)(4LL * j + a1) )
{
v4 = *(_DWORD *)(4LL * j + a1);
*(_DWORD *)(4LL * j + a1) = *(_DWORD *)(4LL * i + a1);
*(_DWORD *)(a1 + 4LL * i) = v4;
}
}
}
return result;
}