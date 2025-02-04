
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

*a1 = 0;
a1[1] = 1;
a1[2] = 2;
a1[3] = 3;
*a2 = 9;
a2[1] = 5;
a2[2] = 3;
a2[3] = 4;
*a3 = 9;
a3[1] = 5;
a3[2] = 3;
result = a3 + 3;
a3[3] = 4;
return result;
}