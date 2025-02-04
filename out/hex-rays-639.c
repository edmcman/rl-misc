#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
__int64 i; // [rsp+18h] [rbp-8h]

for ( i = 0LL; ; ++i )
{
*(_BYTE *)(a1 + i) = *(_BYTE *)(i + a2);
result = *(unsigned __int8 *)(a1 + i);
if ( !(_BYTE)result )
break;
}
return result;
}