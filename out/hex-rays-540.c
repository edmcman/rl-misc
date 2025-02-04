#include <ctype.h>

#include <string.h>

#include <stdlib.h>

#include <float.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, int *a2)
{
__int64 result; // rax
int v3; // eax
int v4; // edx
int v5; // eax
int v6; // edx

if ( *a1 < 0 )
{
if ( (unsigned __int8)*a1 > 0xC1u )
{
if ( (unsigned __int8)*a1 > 0xDFu )
{
if ( (unsigned __int8)*a1 > 0xEFu )
{
if ( (unsigned __int8)*a1 > 0xF4u )
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
else
{
if ( *a1 == -16 )
v5 = 144;
else
v5 = 128;
if ( v5 <= (unsigned __int8)a1[1] && (*a1 != -12 ? (v6 = 191) : (v6 = 143), v6 >= (unsigned __int8)a1[1]) )
{
if ( a1[2] < 0 && (unsigned __int8)a1[2] <= 0xBFu )
{
if ( a1[3] < 0 && (unsigned __int8)a1[3] <= 0xBFu )
{
if ( a2 )
*a2 = a1[3] & 0x3F | ((unsigned __int8)a1[2] << 6) & 0xFC0 | ((unsigned __int8)a1[1] << 12) & 0x3F000 | ((unsigned __int8)*a1 << 18) & 0x1C0000;
result = 4LL;
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
}
else
{
if ( *a1 == -32 )
v3 = 160;
else
v3 = 128;
if ( v3 <= (unsigned __int8)a1[1] && (*a1 != -19 ? (v4 = 191) : (v4 = 159), v4 >= (unsigned __int8)a1[1]) )
{
if ( a1[2] < 0 && (unsigned __int8)a1[2] <= 0xBFu )
{
if ( a2 )
*a2 = a1[2] & 0x3F | (unsigned __int16)((unsigned __int8)*a1 << 12) | ((unsigned __int8)a1[1] << 6) & 0xFC0;
result = 3LL;
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
}
else if ( a1[1] < 0 && (unsigned __int8)a1[1] <= 0xBFu )
{
if ( a2 )
*a2 = a1[1] & 0x3F | ((unsigned __int8)*a1 << 6) & 0x7C0;
result = 2LL;
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = -(unsigned __int8)*a1;
result = 1LL;
}
}
else
{
if ( a2 )
*a2 = (unsigned __int8)*a1;
result = 1LL;
}
return result;
}