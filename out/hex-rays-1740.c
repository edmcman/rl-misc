
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2)
{
unsigned int v3; // [rsp+1Ch] [rbp-4h]

v3 = 1;
++*a2;
while ( *(_BYTE *)(*a2 + a1) != 34 && *(_BYTE *)(*a2 + a1) )
{
if ( *(_BYTE *)(*a2 + a1) == 92 )
++*a2;
++*a2;
}
if ( *(_BYTE *)(*a2 + a1) == 34 )
v3 = 0;
return v3;
}