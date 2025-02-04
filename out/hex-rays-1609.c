#include <string.h>	/* for memcpy() and memset() */

#include <stdio.h>

#include <errno.h>

#include <stdlib.h>

#include <stdint.h>

#include <inttypes.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
if ( *(_BYTE *)(2 * i + a1) <= 0x2Fu || *(_BYTE *)(2 * i + a1) > 0x39u )
{
if ( *(_BYTE *)(2 * i + a1) <= 0x40u || *(_BYTE *)(2 * i + a1) > 0x46u )
{
if ( *(_BYTE *)(2 * i + a1) <= 0x60u || *(_BYTE *)(2 * i + a1) > 0x66u )
return 1LL;
*(_BYTE *)(2 * i + a1) -= 87;
}
else
{
*(_BYTE *)(2 * i + a1) -= 55;
}
}
else
{
*(_BYTE *)(2 * i + a1) -= 48;
}
if ( *(_BYTE *)(2 * i + 1 + a1) <= 0x2Fu || *(_BYTE *)(2 * i + 1 + a1) > 0x39u )
{
if ( *(_BYTE *)(2 * i + 1 + a1) <= 0x40u || *(_BYTE *)(2 * i + 1 + a1) > 0x46u )
{
if ( *(_BYTE *)(2 * i + 1 + a1) <= 0x60u || *(_BYTE *)(2 * i + 1 + a1) > 0x66u )
return 1LL;
*(_BYTE *)(2 * i + 1 + a1) -= 87;
}
else
{
*(_BYTE *)(2 * i + 1 + a1) -= 55;
}
}
else
{
*(_BYTE *)(2 * i + 1 + a1) -= 48;
}
*(_BYTE *)(i + a2) = *(_BYTE *)(2 * i + 1 + a1) | (16 * *(_BYTE *)(2 * i + a1));
}
return 0LL;
}