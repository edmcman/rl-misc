#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
_BYTE *v3; // [rsp+4h] [rbp-8h]

if ( a2 > 127 )
{
if ( a2 > 2047 )
{
if ( a2 > 0xFFFF )
{
if ( a2 > 0x1FFFFF )
{
if ( a2 > 0x3FFFFFF )
{
*a1 = (a2 >> 30) & 1 | 0xFC;
a1[1] = HIBYTE(a2) & 0x3F | 0x80;
a1[2] = (a2 >> 18) & 0x3F | 0x80;
a1[3] = (a2 >> 12) & 0x3F | 0x80;
a1[4] = (a2 >> 6) & 0x3F | 0x80;
v3 = a1 + 6;
a1[5] = a2 & 0x3F | 0x80;
}
else
{
*a1 = HIBYTE(a2) & 3 | 0xF8;
a1[1] = (a2 >> 18) & 0x3F | 0x80;
a1[2] = (a2 >> 12) & 0x3F | 0x80;
a1[3] = (a2 >> 6) & 0x3F | 0x80;
v3 = a1 + 5;
a1[4] = a2 & 0x3F | 0x80;
}
}
else
{
*a1 = (a2 >> 18) & 7 | 0xF0;
a1[1] = (a2 >> 12) & 0x3F | 0x80;
a1[2] = (a2 >> 6) & 0x3F | 0x80;
v3 = a1 + 4;
a1[3] = a2 & 0x3F | 0x80;
}
}
else
{
*a1 = (a2 >> 12) & 0xF | 0xE0;
a1[1] = (a2 >> 6) & 0x3F | 0x80;
v3 = a1 + 3;
a1[2] = a2 & 0x3F | 0x80;
}
}
else
{
*a1 = (a2 >> 6) & 0x1F | 0xC0;
v3 = a1 + 2;
a1[1] = a2 & 0x3F | 0x80;
}
}
else
{
v3 = a1 + 1;
*a1 = a2;
}
return v3;
}