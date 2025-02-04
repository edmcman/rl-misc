
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v3; // rdx
_BYTE *v4; // rax
_BYTE *v5; // [rsp+0h] [rbp-20h]
_BYTE *v6; // [rsp+18h] [rbp-8h]

v5 = a2;
v6 = a1;
if ( !a1 || !a2 )
return 0LL;
while ( *v5 )
{
v3 = v5++;
v4 = v6++;
*v4 = *v3;
}
*v6 = 0;
return a1;
}