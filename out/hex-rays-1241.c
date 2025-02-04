#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2, char a3)
{
_BYTE *result; // rax

*a1 = a2 % 9 + 97;
a1[1] = a2 / 9 + 48;
a1[2] = a3 % 9 + 97;
a1[3] = a3 / 9 + 48;
result = a1 + 4;
a1[4] = 0;
return result;
}