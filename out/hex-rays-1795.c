#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a1 = *a2;
a1[1] = a2[1];
a1[2] = a2[2];
a1[3] = a2[4];
a1[4] = a2[5];
a1[5] = a2[6];
a1[6] = a2[8];
a1[7] = a2[9];
result = a2;
a1[8] = a2[10];
return result;
}