
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a2 = *a1;
a2[1] = a1[1];
result = a1;
a2[2] = a1[2];
return result;
}