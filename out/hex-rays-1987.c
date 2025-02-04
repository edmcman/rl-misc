#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(char *a1)
{
__int64 result; // rax

while ( 1 )
{
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
if ( *a1 <= 64 || *a1 > 90 )
{
if ( *a1 > 96 && *a1 <= 122 )
*a1 = (*a1 - 84) % 26 + 97;
}
else
{
*a1 = (*a1 - 52) % 26 + 65;
}
++a1;
}
return result;
}