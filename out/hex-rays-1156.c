
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *v6; // [rsp+18h] [rbp-8h]

v6 = a1;
while ( *a2 )
{
v2 = a2++;
v3 = v6++;
*v3 = *v2;
}
*v6 = 0;
return a1;
}