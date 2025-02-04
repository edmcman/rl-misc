
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v4; // rdx
_BYTE *v5; // rax

do
{
v4 = a2++;
v5 = a1++;
*v5 = *v4;
}
while ( *v5 );
return a1 - 1;
}