
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2)
{
int v3; // [rsp+18h] [rbp-8h]
int v4; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v4 = 0;
while ( *(_BYTE *)(*a2 + a1) )
{
if ( *(_BYTE *)(*a2 + a1) == 40 )
++v3;
if ( *(_BYTE *)(*a2 + a1) == 41 )
++v4;
++*a2;
}
if ( v3 > v4 )
return 1LL;
if ( v4 <= v3 )
return 0LL;
return 2LL;
}