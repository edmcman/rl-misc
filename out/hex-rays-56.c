
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2, _BYTE *a3)
{
_BYTE *v4; // [rsp+0h] [rbp-18h]

v4 = a3;
if ( a3 == a1 )
{
*a3 = 0;
}
else if ( a3 > a1 )
{
do
{
if ( v4 <= a1 )
break;
--v4;
}
while ( a2 == *v4 );
v4[a2 != *v4] = 0;
}
return a1;
}