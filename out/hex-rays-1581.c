#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a2 = 1065353216;
a2[1] = 0;
a2[2] = 0;
a2[3] = 0;
a2[4] = 0;
a2[5] = 1065353216;
a2[6] = 0;
a2[7] = 0;
a2[8] = 0;
a2[9] = 0;
a2[10] = 1065353216;
a2[11] = 0;
a2[12] = *a1;
a2[13] = a1[1];
a2[14] = a1[2];
result = a2 + 15;
a2[15] = 1065353216;
return result;
}