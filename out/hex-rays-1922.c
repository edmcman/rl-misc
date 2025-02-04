#include <stdint.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *result; // rax

*a2 = (char)(a1 / 10) % 10 + 48;
a2[1] = a1 % 10 + 48;
result = a2 + 2;
a2[2] = 0;
return result;
}