#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _BYTE *a2)
{
__int64 result; // rax

if ( a1 >= 0 )
{
if ( a1 > 127 )
{
if ( a1 > 2047 )
{
if ( a1 > 0xFFFF )
{
if ( a1 > 1114111 )
{
result = 0LL;
}
else
{
if ( a2 )
{
*a2 = (a1 >> 18) | 0xF0;
a2[1] = (a1 >> 12) & 0x3F | 0x80;
a2[2] = (a1 >> 6) & 0x3F | 0x80;
a2[3] = a1 & 0x3F | 0x80;
}
result = 4LL;
}
}
else
{
if ( a2 )
{
*a2 = (a1 >> 12) | 0xE0;
a2[1] = (a1 >> 6) & 0x3F | 0x80;
a2[2] = a1 & 0x3F | 0x80;
}
result = 3LL;
}
}
else
{
if ( a2 )
{
*a2 = (a1 >> 6) | 0xC0;
a2[1] = a1 & 0x3F | 0x80;
}
result = 2LL;
}
}
else
{
if ( a2 )
*a2 = a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = -(char)a1;
result = 1LL;
}
return result;
}