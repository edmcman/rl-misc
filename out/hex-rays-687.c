#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
int v2; // eax
int v4; // [rsp+1Ch] [rbp-4h]

v4 = 0;
*a2 = 0;
while ( *(_BYTE *)(v4 + a1) )
{
if ( *(char *)(v4 + a1) > 57 || *(char *)(v4 + a1) <= 47 )
return 1LL;
*a2 *= 10;
v2 = v4++;
*a2 += *(char *)(v2 + a1) - 48;
}
return 0LL;
}