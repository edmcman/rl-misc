#include <math.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, double *a2, double *a3, double *a4, _QWORD *a5, double *a6)
{
double *result; // rax
double v7; // [rsp+38h] [rbp-8h]

v7 = *a3;
*a5 = 0x3FF0000000000000LL;
a5[1] = 0LL;
a5[2] = 0LL;
a5[3] = *(_QWORD *)a1;
*a6 = v7;
result = a6 + 1;
a6[1] = *a4 + *(double *)a1 * *(double *)(a1 + 24) + -*(double *)(a1 + 16) * v7 - *a2 * *(double *)(a1 + 8);
return result;
}