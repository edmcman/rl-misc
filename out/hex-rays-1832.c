
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, unsigned __int8 a2)
{
_BYTE *result; // rax

*a1 = a0123456789abcd[a2 >> 4];
a1[1] = a0123456789abcd[a2 & 0xF];
result = a1 + 2;
a1[2] = 0;
return result;
}