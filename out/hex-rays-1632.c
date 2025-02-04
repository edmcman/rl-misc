#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double v2; // xmm1_8
double v3; // xmm0_8
double v4; // xmm0_8
double v5; // xmm0_8
double v6; // xmm1_8
double v7; // xmm0_8
double v8; // xmm0_8
double v9; // xmm0_8
double v10; // xmm0_8
double *result; // rax

v2 = a1[1] * a1[1] + a1[2] * a1[2];
*a2 = 1.0 - (v2 + v2);
v3 = *a1 * a1[1] + a1[2] * a1[3];
a2[3] = v3 + v3;
v4 = *a1 * a1[2] - a1[3] * a1[1];
a2[6] = v4 + v4;
v5 = a1[1] * *a1 - a1[3] * a1[2];
a2[1] = v5 + v5;
v6 = a1[2] * a1[2] + *a1 * *a1;
a2[4] = 1.0 - (v6 + v6);
v7 = a1[1] * a1[2] + *a1 * a1[3];
a2[7] = v7 + v7;
v8 = a1[2] * *a1 + a1[1] * a1[3];
a2[2] = v8 + v8;
v9 = a1[2] * a1[1] - a1[3] * *a1;
a2[5] = v9 + v9;
v10 = *a1 * *a1 + a1[1] * a1[1];
result = a2 + 8;
a2[8] = 1.0 - (v10 + v10);
return result;
}