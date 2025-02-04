
# 1 
#include "defs.h"
_BOOL8  func0(__int64 a1)
{
int v1; // eax

if ( (*(_WORD *)(a1 + 2) & 0x7F80) == 32640 )
{
v1 = 1;
}
else if ( (*(_WORD *)(a1 + 2) & 0x7F80) != 0 )
{
v1 = 0;
}
else
{
v1 = 2;
}
if ( v1 == 2 )
*(_DWORD *)a1 = 0;
return v1 != 0;
}