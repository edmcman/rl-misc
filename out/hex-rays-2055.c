#include <limits.h>

#include <wchar.h>

#include <stdio.h>

#include <printf.h>

#include <locale.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int *a3)
{
int v4; // eax

if ( !a2 )
return 0xFFFFFFFFLL;
if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
{
v4 = 256;
}
else if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
{
v4 = 512;
}
else if ( (*(_BYTE *)(a1 + 13) & 2) != 0 )
{
v4 = 1;
}
else
{
v4 = (*(unsigned __int8 *)(a1 + 12) << 9) & 0x400;
}
*a3 = v4;
return 1LL;
}