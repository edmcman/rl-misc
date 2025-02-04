
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
_BYTE *result; // rax

*a1 += a1[1];
a1[2] += a1[3];
a1[1] = __ROL1__(a1[1], 2);
a1[3] = __ROR1__(a1[3], 3);
a1[1] ^= *a1;
a1[3] ^= a1[2];
*a1 = __ROL1__(*a1, 4);
*a1 += a1[3];
a1[2] += a1[1];
a1[1] = __ROL1__(a1[1], 3);
a1[3] = __ROR1__(a1[3], 1);
a1[1] ^= a1[2];
a1[3] ^= *a1;
result = a1 + 2;
a1[2] = __ROL1__(a1[2], 4);
return result;
}