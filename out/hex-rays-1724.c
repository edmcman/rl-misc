
# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
__int64 result; // rax

while ( 1 )
{
result = *a1;
if ( !(_BYTE)result )
break;
*a1++ ^= 0x1Fu;
}
return result;
}