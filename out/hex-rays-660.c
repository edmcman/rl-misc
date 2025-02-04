#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v4; // [rsp+8h] [rbp-18h]

v4 = a1;
while ( *a2 )
*v4++ = *a2++;
*v4 = 0;
return a1;
}