#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
_BYTE *v2; // rax
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
v2 = (_BYTE *)(i + a1);
*v2 = *(_BYTE *)(a2 + i);
result = (unsigned __int8)*v2;
if ( !(_BYTE)result )
break;
}
return result;
}