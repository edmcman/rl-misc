
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
unsigned int v3; // eax
int v4; // [rsp+14h] [rbp-8h]

v4 = 0;
while ( *(_DWORD *)(4LL * v4 + a1) == -1 )
{
if ( ++v4 == a2 / 32 )
return 0xFFFFFFFFLL;
}
_BitScanReverse(&v3, ~*(_DWORD *)(4LL * v4 + a1));
*(_DWORD *)(4LL * v4 + a1) |= 0x80000000 >> (v3 ^ 0x1F);
return 32 * v4 + (v3 ^ 0x1F);
}