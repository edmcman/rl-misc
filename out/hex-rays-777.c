
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int v2; // eax
__int64 result; // rax
int i; // [rsp+14h] [rbp-Ch]
int j; // [rsp+18h] [rbp-8h]
int v6; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a2);
if ( !(_BYTE)result )
break;
v6 = 0;
for ( j = 0; *(_BYTE *)(j + a1); ++j )
{
if ( *(_BYTE *)(j + a1) != *(_BYTE *)(i + a2) )
{
v2 = v6++;
*(_BYTE *)(a1 + v2) = *(_BYTE *)(j + a1);
}
}
*(_BYTE *)(v6 + a1) = 0;
}
return result;
}