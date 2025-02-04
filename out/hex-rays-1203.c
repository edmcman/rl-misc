#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *result; // rax

while ( *a2 )
{
v2 = a2++;
v3 = a1++;
*v3 = *v2;
}
result = a1;
*a1 = 0;
return result;
}