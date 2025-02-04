#include <stdlib.h>

#include <unistd.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rax

while ( 1 )
{
v2 = a2++;
*a1 = *v2;
if ( !*a1 )
break;
++a1;
}
return a1;
}