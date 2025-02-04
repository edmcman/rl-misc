#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, char a2)
{
__int64 result; // rax
_BYTE *i; // [rsp+14h] [rbp-8h]

while ( 1 )
{
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
if ( a2 == *a1 )
{
for ( i = a1; *i; ++i )
*i = i[1];
}
else
{
++a1;
}
}
return result;
}