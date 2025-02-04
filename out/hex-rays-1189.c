#include <X11/IntrinsicP.h>

#include <X11/StringDefs.h>

#include <X11/Shell.h>

#include <X11/CompositeP.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
unsigned int v4; // [rsp+24h] [rbp-4h]

v4 = 1;
*(_DWORD *)a2 &= 0xCu;
if ( !*(_DWORD *)a2 )
return 0LL;
if ( (*(_DWORD *)a2 & 8) != 0 )
{
if ( *(_WORD *)(a2 + 10) > 0x12Bu )
{
v4 = 0;
}
else
{
v4 = 2;
*(_WORD *)(a3 + 10) = 300;
*(_DWORD *)a3 &= 8u;
}
}
if ( (*(_DWORD *)a2 & 4) != 0 )
{
if ( *(_WORD *)(a2 + 8) > 0x12Bu )
{
v4 = 0;
}
else
{
v4 = 2;
*(_WORD *)(a3 + 8) = 300;
*(_DWORD *)a3 &= 4u;
}
}
return v4;
}