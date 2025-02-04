#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *v3; // rdx
_BYTE *v4; // rax
int i; // [rsp+20h] [rbp-4h]

for ( i = 0; i < a3 && *a2; ++i )
{
v3 = a2++;
v4 = a1++;
*v4 = *v3;
}
*a1 = 0;
return a1;
}