#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2, int a3)
{
int i; // [rsp+10h] [rbp-10h]
int v5; // [rsp+14h] [rbp-Ch]

if ( a3 != 2 && a3 != 1 )
return 4294967292LL;
if ( !a1 )
return 0xFFFFFFFFLL;
if ( a2 > 0x10FFFF )
return 4294967280LL;
if ( a2 > 0xD7FF && a2 <= 0xDFFF )
return 4294967280LL;
for ( i = 0; i <= 3; ++i )
{
if ( a3 == 2 )
v5 = i;
else
v5 = 3 - i;
*(_BYTE *)(v5 + a1) = ((a2 << (8 * i)) & 0xFF000000) >> 24;
}
return 4LL;
}