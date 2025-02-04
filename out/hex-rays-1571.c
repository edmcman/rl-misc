#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
_DWORD *v2; // rax
_DWORD *v3; // rax
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *(unsigned __int8 *)(i + a1);
if ( !(_BYTE)result )
break;
if ( *(char *)(i + a1) > 96 && *(char *)(i + a1) <= 122 )
{
v2 = (_DWORD *)(4LL * *(char *)(i + a1) - 388 + a2);
++*v2;
}
if ( *(char *)(i + a1) > 64 && *(char *)(i + a1) <= 90 )
{
v3 = (_DWORD *)(4LL * *(char *)(i + a1) - 260 + a2);
++*v3;
}
}
return result;
}