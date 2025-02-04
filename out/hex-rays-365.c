#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, __int64 a2)
{
double v2; // xmm1_8
double v3; // xmm1_8
__int64 result; // rax

*(double *)a2 = 1.0 - (*a1 * *a1 + *a1 * *a1);
v2 = a1[1] * a1[1];
*(double *)(a2 + 32) = 1.0 - (v2 + v2);
v3 = a1[2] * a1[2];
*(double *)(a2 + 64) = 1.0 - (v3 + v3);
*(double *)(a2 + 24) = a1[1] * (*a1 * -2.0);
*(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
*(double *)(a2 + 48) = a1[2] * (*a1 * -2.0);
*(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 48);
result = a2 + 48;
*(double *)(a2 + 56) = a1[2] * (a1[1] * -2.0);
*(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 56);
return result;
}