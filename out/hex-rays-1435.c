#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3)
{
int v3; // eax
_BYTE *v4; // rcx
int v5; // eax
int v6; // eax
int v8; // [rsp+20h] [rbp-14h]
int v9; // [rsp+24h] [rbp-10h]
unsigned int v10; // [rsp+28h] [rbp-Ch]

v10 = 0;
v8 = 0;
v9 = 0;
while ( *(_BYTE *)(v9 + a2) && v8 < a3 - 1 )
{
if ( *(char *)(v9 + a2) < 0 )
{
if ( *(_BYTE *)(v9 + a2) > 0xDFu )
{
if ( *(_BYTE *)(v9 + a2) > 0xEFu )
{
if ( *(_BYTE *)(v9 + a2) <= 0xF7u )
v9 += 4;
}
else
{
v9 += 3;
}
}
else
{
if ( (*(_BYTE *)(v9 + a2) & 0x1C) == 0 )
{
v6 = v8++;
*(_BYTE *)(v6 + a1) = *(_BYTE *)(v9 + 1 + a2) & 0x3F | (*(_BYTE *)(v9 + a2) << 6);
++v10;
}
v9 += 2;
}
}
else
{
v3 = v9++;
v4 = (_BYTE *)(v3 + a2);
v5 = v8++;
*(_BYTE *)(a1 + v5) = *v4;
++v10;
}
}
*(_BYTE *)(v8 + a1) = 0;
return v10;
}