#include <stdarg.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rbx
_BYTE *v3; // rdx
_BYTE *v4; // rax

v2 = a1;
do
{
v3 = a2++;
v4 = v2++;
*v4 = *v3;
}
while ( *v4 );
return a1;
}