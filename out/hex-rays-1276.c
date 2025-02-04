#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
_DWORD *v3; // rax
unsigned __int64 result; // rax
unsigned __int64 i; // [rsp+18h] [rbp-10h]

for ( i = 0LL; ; ++i )
{
result = i;
if ( i >= a3 )
break;
result = *(unsigned __int8 *)(a2 + i);
if ( !(_BYTE)result )
break;
v3 = (_DWORD *)(4LL * (*(char *)(a2 + i) - 97) + a1);
++*v3;
}
return result;
}