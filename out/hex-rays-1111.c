#include <stdint.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1, unsigned __int8 *a2)
{
unsigned __int8 *v2; // rdx
unsigned __int8 *v3; // rax
__int64 result; // rax

while ( 1 )
{
result = *a2;
if ( !(_BYTE)result )
break;
v2 = a2++;
v3 = a1++;
*v3 = *v2;
}
return result;
}