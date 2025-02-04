#include <stdbool.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
int v4; // [rsp+24h] [rbp-4h]

v4 = 0;
*a3 = 0;
while ( a2 > v4 + a1 && *(char *)(v4 + a1) < 0 )
{
*a3 += (*(_BYTE *)(v4 + a1) & 0x7F) << (7 * v4);
++v4;
}
if ( a2 == v4 + a1 )
return 0LL;
*a3 += (*(_BYTE *)(v4 + a1) & 0x7F) << (7 * v4);
return (unsigned int)(v4 + 1);
}