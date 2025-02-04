#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax

do
{
v2 = a2++;
v3 = a1++;
*v3 = *v2;
}
while ( *v3 );
return a1 - 1;
}