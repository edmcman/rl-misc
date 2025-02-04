#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
_BYTE *result; // rax
_BYTE *v5; // [rsp+18h] [rbp-8h]

v5 = a1 + 1;
*a4 = *a1;
while ( *v5 )
{
if ( *v5 == 65 || *v5 == 69 || *v5 == 73 || *v5 == 79 || *v5 == 85 )
{
a4[1] = *v5;
break;
}
++v5;
}
a4[2] = *a2;
a4[3] = *a3;
result = a4 + 4;
a4[4] = 0;
return result;
}