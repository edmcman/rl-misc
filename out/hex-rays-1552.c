#include <stdio.h>

#include <stdlib.h>

#include <string.h>             /* memset, strlen */

#include <ctype.h>

#include <errno.h>

#include <math.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned int a2)
{
int v2; // eax
int v4; // [rsp+18h] [rbp-4h]
int v5; // [rsp+18h] [rbp-4h]

if ( a2 > 0x7F )
{
if ( a2 > 0x7FF )
{
*a1 = (a2 >> 12) | 0xE0;
v5 = 2;
a1[1] = (a2 >> 6) & 0x3F | 0x80;
}
else
{
v5 = 1;
*a1 = (a2 >> 6) | 0xC0;
}
v2 = v5;
v4 = v5 + 1;
a1[v2] = a2 & 0x3F | 0x80;
}
else
{
*a1 = a2;
v4 = 1;
}
a1[v4] = 0;
return (unsigned int)v4;
}