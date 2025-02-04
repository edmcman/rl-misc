
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax

*a2 = a1[3];
a2[1] = a1[2];
a2[2] = a1[1];
result = a2 + 3;
a2[3] = *a1;
return result;
}