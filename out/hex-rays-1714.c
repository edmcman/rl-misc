#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2)
{
_BYTE *v2; // rax
_BYTE *result; // rax
_BYTE *v4; // [rsp+Ch] [rbp-10h]
_BYTE *v5; // [rsp+14h] [rbp-8h]

v4 = a1;
v5 = a1;
while ( *v4 )
{
v2 = v4++;
*v5 = *v2;
v5 += a2 != *v5;
}
result = v5;
*v5 = 0;
return result;
}