#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+18h] [rbp-18h]
double v4; // [rsp+20h] [rbp-10h]
double v5; // [rsp+28h] [rbp-8h]

v3 = *a2;
v4 = a2[1];
v5 = a2[2];
*a2 = a1[6] * v5 + *a1 * *a2 + a1[3] * v4;
a2[1] = a1[7] * v5 + a1[1] * v3 + a1[4] * v4;
result = a2 + 2;
a2[2] = a1[8] * v5 + a1[2] * v3 + a1[5] * v4;
return result;
}