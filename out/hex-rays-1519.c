#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)
{
double *result; // rax
double v10; // [rsp+48h] [rbp-10h]
double v11; // [rsp+50h] [rbp-8h]

v10 = (a4 + a4) * a9 + 4.0 * a5 * a9 * a9 + a3;
v11 = (a7 + a7) * a9 + 4.0 * a8 * a9 * a9 + a6;
*a1 = v10 / v11 * *a1;
*a2 = (a6 + a6 - 8.0 * a8 * a9 * a9) / v11;
a2[1] = (4.0 * a8 * a9 * a9 - (a7 + a7) * a9 + a6) / v11;
a2[2] = (a3 + a3 - 8.0 * a5 * a9 * a9) / v10;
result = a2 + 3;
a2[3] = (4.0 * a5 * a9 * a9 - (a4 + a4) * a9 + a3) / v10;
return result;
}