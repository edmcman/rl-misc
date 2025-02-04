
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, __int16 *a2)
{
_DWORD *result; // rax

*a1 = *a2 + 1;
a1[1] = a2[1] + 1;
a1[2] = a2[2] + 1;
result = a1 + 3;
a1[3] = a2[3] + 1;
return result;
}