
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int j; // [rsp+10h] [rbp-8h]
int v4; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 30; ++i )
{
for ( j = 0; ; ++j )
{
result = (unsigned int)(31 - i);
if ( j >= (int)result )
break;
if ( *(_DWORD *)(4LL * j + a1) > *(_DWORD *)(4 * (j + 1LL) + a1) )
{
v4 = *(_DWORD *)(4LL * j + a1);
*(_DWORD *)(4LL * j + a1) = *(_DWORD *)(4 * (j + 1LL) + a1);
*(_DWORD *)(a1 + 4 * (j + 1LL)) = v4;
}
}
}
return result;
}