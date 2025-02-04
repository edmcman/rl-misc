#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
int v2; // eax
_BYTE *v3; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *result; // rax

while ( *a2 )
{
v2 = (char)*a2;
if ( v2 == 9 )
{
*a1 = 92;
v4 = a1 + 1;
a1 += 2;
*v4 = 110;
}
else if ( v2 == 10 )
{
*a1 = 92;
v3 = a1 + 1;
a1 += 2;
*v3 = 110;
}
else
{
v5 = a1++;
*v5 = *a2;
}
++a2;
}
result = a1;
*a1 = 0;
return result;
}