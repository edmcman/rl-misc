


# 1 
#include "defs.h"
__int64  func0(char a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 26; ++i )
{
if ( a1 == *(_BYTE *)(i + a2) )
{
result = 4LL * i + a3;
++*(_DWORD *)result;
return result;
}
}
for ( j = 0; ; ++j )
{
result = *(unsigned int *)(4LL * j + a3);
if ( !(_DWORD)result )
break;
}
if ( j <= 26 && a1 != 64 )
{
*(_BYTE *)(a2 + j) = a1;
result = 4LL * j + a3;
++*(_DWORD *)result;
}
return result;
}