
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *v5; // [rsp+10h] [rbp-10h]

v5 = a1;
while ( *a2 )
{
v2 = a2++;
v3 = v5++;
*v3 = *v2;
}
*v5 = 0;
return a1;
}