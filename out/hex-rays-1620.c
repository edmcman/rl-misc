
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v3; // rdx
_BYTE *v4; // rax
_BYTE *v5; // [rsp+0h] [rbp-10h]
_BYTE *v6; // [rsp+8h] [rbp-8h]

v6 = a1;
v5 = a2;
if ( !a2 )
return a1;
while ( *v5 )
{
v3 = v5++;
v4 = v6++;
*v4 = *v3;
}
*v6 = 0;
return v6;
}