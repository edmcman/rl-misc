
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2, char a3)
{
unsigned int v4; // [rsp+20h] [rbp-4h]

*a2 = -1;
v4 = 0;
while ( a1 )
{
if ( !*(_BYTE *)(++*a2 + a1) )
break;
if ( (!*a2 || a3 == *(_BYTE *)(*a2 - 1LL + a1)) && a3 != *(_BYTE *)(*a2 + a1) )
++v4;
}
return v4;
}