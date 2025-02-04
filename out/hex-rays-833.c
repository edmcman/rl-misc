
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax
double v4; // [rsp+20h] [rbp-8h]

v4 = *a2 * a1[1] + *a1 * a2[1];
*a3 = *a2 * *a1 - a2[1] * a1[1];
result = a3 + 1;
a3[1] = v4;
return result;
}