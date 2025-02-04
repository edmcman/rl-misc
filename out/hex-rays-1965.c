#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned int a2)
{
unsigned int v3; // [rsp+Ch] [rbp-10h]

v3 = 0;
if ( a2 > 0x7F )
{
if ( a2 > 0x7FF )
{
if ( a2 > 0xFFFF )
{
if ( a2 <= 0x1FFFFF )
{
*a1 = -32;
*a1 |= (a2 >> 18) & 7;
a1[1] = 0x80;
a1[1] |= (a2 >> 12) & 0x3F;
a1[2] = 0x80;
a1[2] |= (a2 >> 6) & 0x3F;
a1[3] = 0x80;
a1[3] |= a2 & 0x3F;
v3 = 4;
}
}
else
{
*a1 = -32;
*a1 |= (a2 >> 12) & 0xF;
a1[1] = 0x80;
a1[1] |= (a2 >> 6) & 0x3F;
a1[2] = 0x80;
a1[2] |= a2 & 0x3F;
v3 = 3;
}
}
else
{
*a1 = -64;
*a1 |= (a2 >> 6) & 0x1F;
a1[1] = 0x80;
a1[1] |= a2 & 0x3F;
v3 = 2;
}
}
else
{
*a1 = a2;
v3 = 1;
}
return v3;
}