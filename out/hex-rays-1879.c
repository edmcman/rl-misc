





# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned __int8 *a2)
{
__int64 result; // rax

while ( 1 )
{
result = *a2;
if ( !(_BYTE)result )
break;
*a1++ = *a2++;
}
return result;
}