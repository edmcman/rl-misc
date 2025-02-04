#include <stdlib.h>

#include <string.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
int v3; // [rsp+1Ch] [rbp-4h]

v3 = 0;
if ( !a1 )
return 0LL;
while ( 1 )
{
if ( !*(_BYTE *)(v3 + a1) )
{
if ( a2 )
*a2 = v3;
return 0LL;
}
if ( *(_BYTE *)(v3 + a1) != 32 && *(_BYTE *)(v3 + a1) != 9 && *(_BYTE *)(v3 + a1) != 10 && *(_BYTE *)(v3 + a1) != 13 )
break;
++v3;
}
if ( a2 )
*a2 = v3;
return *(unsigned __int8 *)(v3 + a1);
}