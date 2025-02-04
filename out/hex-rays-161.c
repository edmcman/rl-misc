#include <stdio.h>

#include <string.h>

#include <wchar.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1, int *a2)
{
__int64 result; // rax
unsigned __int8 v3; // [rsp+13h] [rbp-Dh]
int i; // [rsp+14h] [rbp-Ch]
int v5; // [rsp+18h] [rbp-8h]
int v6; // [rsp+1Ch] [rbp-4h]

v3 = *a1;
if ( *a1 <= 0xBFu )
{
*a2 = v3;
result = 1LL;
}
else
{
if ( (v3 & 0xE0) == 192 )
{
v5 = 2;
v6 = v3 & 0x1F;
}
else if ( (v3 & 0xF0) == 224 )
{
v5 = 3;
v6 = v3 & 0xF;
}
else if ( (v3 & 0xF8) == 240 )
{
v5 = 4;
v6 = v3 & 7;
}
else if ( (v3 & 0xFC) == 248 )
{
v5 = 5;
v6 = v3 & 3;
}
else
{
if ( (v3 & 0xFE) != 252 )
{
*a2 = v3;
return 1LL;
}
v5 = 6;
v6 = v3 & 1;
}
for ( i = 1; i < v5; ++i )
{
if ( (a1[i] & 0xC0) != 128 )
{
*a2 = v3;
return 1LL;
}
v6 = a1[i] & 0x3F | (v6 << 6);
}
*a2 = v6;
result = (unsigned int)v5;
}
return result;
}