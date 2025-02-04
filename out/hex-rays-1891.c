#include <curses.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <ctype.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1)
{
unsigned __int64 result; // rax
_BYTE *v2; // [rsp+0h] [rbp-8h]

v2 = a1;
if ( !*a1 )
{
*a1 = 47;
a1[1] = 0;
}
while ( *v2 )
++v2;
result = (unsigned __int8)*(v2 - 1);
if ( (_BYTE)result != 47 )
{
*v2 = 47;
result = (unsigned __int64)(v2 + 1);
v2[1] = 0;
}
return result;
}