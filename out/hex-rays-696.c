#include <curses.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned __int8 *a2)
{
__int64 result; // rax
unsigned __int8 *v3; // [rsp+0h] [rbp-10h]
_BYTE *v4; // [rsp+8h] [rbp-8h]

v4 = a1;
v3 = a2;
if ( a1 && a2 )
{
while ( 1 )
{
result = *v3;
if ( !(_BYTE)result )
break;
*v4++ = *v3++;
}
}
return result;
}