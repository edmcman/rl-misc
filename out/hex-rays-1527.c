#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

a1[8] = 1065353216;
a1[4] = a1[8];
*a1 = a1[4];
a1[7] = 0;
a1[6] = a1[7];
a1[5] = a1[6];
a1[3] = a1[5];
result = a1 + 2;
a1[2] = a1[3];
a1[1] = a1[2];
return result;
}