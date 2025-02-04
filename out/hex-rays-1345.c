#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, __int64 a2, double *a3)
{
double v3; // xmm0_8
double v4; // xmm0_8
double v5; // xmm1_8
double *result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
*(double *)(8LL * i + a2) = a1[i];
v3 = a1[2] * a1[7] + *a1 * a1[5] + -a1[4] * a1[1] - a1[3] * a1[6];
*a3 = v3 + v3;
v4 = *a1 * a1[6] + -a1[4] * a1[2] + a1[3] * a1[5] - a1[1] * a1[7];
a3[1] = v4 + v4;
v5 = a1[3] * -a1[4] - a1[2] * a1[5] + a1[1] * a1[6];
result = a3 + 2;
a3[2] = *a1 * a1[7] + v5 + *a1 * a1[7] + v5;
return result;
}