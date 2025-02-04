#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
__int64 result; // rax

while ( 1 )
{
*a1 = *a2;
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
++a1;
++a2;
}
return result;
}