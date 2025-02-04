#include <math.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

*a1 = *a2;
a1[1] = a2[4];
a1[2] = a2[8];
a1[3] = 0;
a1[4] = a2[1];
a1[5] = a2[5];
a1[6] = a2[9];
a1[7] = 0;
a1[8] = a2[2];
a1[9] = a2[6];
a1[10] = a2[10];
a1[11] = 0;
a1[12] = *a3;
a1[13] = a3[1];
a1[14] = a3[2];
result = a1 + 15;
a1[15] = 1065353216;
return result;
}