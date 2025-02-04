
# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2, char a3)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
if ( a2 == *(_BYTE *)(i + a1) )
*(_BYTE *)(a1 + i) = a3;
}
return result;
}