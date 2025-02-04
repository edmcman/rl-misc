
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _DWORD *a2)
{
unsigned int v4; // [rsp+18h] [rbp-8h]
unsigned int v5; // [rsp+1Ch] [rbp-4h]

v4 = 826366252;
v5 = 2012234989;
while ( *a1 )
{
v4 = __ROL4__(v4, 7) + (char)*a1;
v5 = __ROL4__(v5, 11) + (char)*a1++;
}
*a2 = v5 + HIWORD(v4);
return HIWORD(v5) + v4;
}