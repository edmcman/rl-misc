#include <string.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4)
{
_BYTE *result; // rax

*a4 = *a1;
a4[1] = *a2;
a4[2] = *a3;
a4[3] = a3[1];
result = a4 + 4;
a4[4] = 0;
return result;
}