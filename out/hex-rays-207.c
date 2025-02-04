#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2)
{
_BYTE *v3; // [rsp+8h] [rbp-8h]

v3 = a1;
if ( a2 > 9 )
v3 = (_BYTE *)func0(a1, (unsigned int)(a2 / 10));
*v3 = a2 % 10 + 48;
return v3 + 1;
}