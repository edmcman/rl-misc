
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rax
_BYTE *i; // [rsp+1Ch] [rbp-8h]

for ( i = a2; *i; ++i )
{
if ( a3 > 1 )
{
v3 = a1++;
*v3 = *i;
--a3;
}
}
if ( a3 > 0 )
*a1 = 0;
return (_BYTE *)(i - a2);
}