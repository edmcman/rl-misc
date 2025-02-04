#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, __int64 a2)
{
unsigned __int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

while ( 1 )
{
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
for ( i = 0; *(_BYTE *)(i + a2); ++i )
{
if ( *(_BYTE *)(i + a2) == *a1 )
{
result = (unsigned __int64)a1;
*a1 = 0;
return result;
}
}
++a1;
}
return result;
}