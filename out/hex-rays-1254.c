#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned __int64 a2, _BYTE *a3, _DWORD *a4)
{
int v5; // eax
int v6; // [rsp+28h] [rbp-8h]
int i; // [rsp+2Ch] [rbp-4h]

*a4 = 0;
if ( *a3 != 60 )
return 0LL;
v6 = 1;
if ( a3[1] == 42 )
{
*a4 = 1;
v6 = 2;
}
for ( i = 0; a2 > i; ++i )
{
if ( !a3[v6] )
return 0LL;
if ( a3[v6] == 62 )
break;
v5 = i;
*(_BYTE *)(a1 + v5) = a3[v6++];
}
*(_BYTE *)(i + a1) = 0;
return (unsigned int)(v6 + 1);
}