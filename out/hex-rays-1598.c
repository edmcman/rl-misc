#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+10h] [rbp-20h]
double v4; // [rsp+18h] [rbp-18h]
double v5; // [rsp+20h] [rbp-10h]
double v6; // [rsp+28h] [rbp-8h]

v3 = a1[8] * a1[4] - a1[5] * a1[7];
v4 = a1[8] * a1[3] - a1[6] * a1[5];
v5 = a1[7] * a1[3] - a1[6] * a1[4];
v6 = a1[2] * v5 + *a1 * v3 - a1[1] * v4;
*a2 = v3 / v6;
a2[1] = (a1[7] * a1[2] - a1[8] * a1[1]) / v6;
a2[2] = (a1[5] * a1[1] - a1[4] * a1[2]) / v6;
a2[3] = -v4 / v6;
a2[4] = (a1[8] * *a1 - a1[6] * a1[2]) / v6;
a2[5] = (a1[2] * a1[3] - a1[5] * *a1) / v6;
a2[6] = v5 / v6;
a2[7] = (a1[1] * a1[6] - a1[7] * *a1) / v6;
result = a2 + 6;
a2[8] = (a1[4] * *a1 - a1[1] * a1[3]) / v6;
return result;
}