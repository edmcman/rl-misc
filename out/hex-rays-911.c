#include <stdlib.h>

#include <stdio.h>

#include <stdarg.h>

#include <string.h>

#include <ctype.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2)
{
__int64 result; // rax

if ( a2 > 127 )
{
if ( a2 > 2047 )
{
if ( a2 > 0xFFFF )
{
if ( a2 > 1114111 )
{
result = 0LL;
}
else
{
*a1 = (a2 >> 18) & 7 | 0xF0;
a1[1] = (a2 >> 12) & 0x3F | 0x80;
a1[2] = (a2 >> 6) & 0x3F | 0x80;
a1[3] = a2 & 0x3F | 0x80;
result = 4LL;
}
}
else
{
*a1 = (a2 >> 12) & 0xF | 0xE0;
a1[1] = (a2 >> 6) & 0x3F | 0x80;
a1[2] = a2 & 0x3F | 0x80;
result = 3LL;
}
}
else
{
*a1 = (a2 >> 6) & 0x1F | 0xC0;
a1[1] = a2 & 0x3F | 0x80;
result = 2LL;
}
}
else
{
*a1 = a2;
result = 1LL;
}
return result;
}