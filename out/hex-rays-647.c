#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rdx
_BYTE *v4; // rax

while ( a3 && a2 && a1 && *a2 && *a2 != 44 && *a2 != 42 )
{
v3 = a2++;
v4 = a1++;
*v4 = *v3;
--a3;
}
*a1 = 0;
return a1;
}