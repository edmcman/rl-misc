#include <stdio.h>

#include <stddef.h>

#include <string.h>

#include <stdlib.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2)
{
int v3; // [rsp+18h] [rbp-4h]

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
*a1 = (a2 >> 30) | 0xFC;
a1[1] = HIBYTE(a2) & 0x3F | 0x80;
a1[2] = (a2 >> 18) & 0x3F | 0x80;
a1[3] = (a2 >> 12) & 0x3F | 0x80;
a1[4] = (a2 >> 6) & 0x3F | 0x80;
a1[5] = a2 & 0x3F | 0x80;
v3 = 6;
}
else
{
*a1 = HIBYTE(a2) | 0xF8;
a1[1] = (a2 >> 18) & 0x3F | 0x80;
a1[2] = (a2 >> 12) & 0x3F | 0x80;
a1[3] = (a2 >> 6) & 0x3F | 0x80;
a1[4] = a2 & 0x3F | 0x80;
v3 = 5;
}
}
else
{
*a1 = (a2 >> 18) | 0xF0;
a1[1] = (a2 >> 12) & 0x3F | 0x80;
a1[2] = (a2 >> 6) & 0x3F | 0x80;
a1[3] = a2 & 0x3F | 0x80;
v3 = 4;
}
}
else
{
*a1 = (a2 >> 12) | 0xE0;
a1[1] = (a2 >> 6) & 0x3F | 0x80;
a1[2] = a2 & 0x3F | 0x80;
v3 = 3;
}
}
else
{
*a1 = (a2 >> 6) | 0xC0;
a1[1] = a2 & 0x3F | 0x80;
v3 = 2;
}
}
else
{
*a1 = a2;
v3 = 1;
}
a1[v3] = 0;
return (unsigned int)v3;
}