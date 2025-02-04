#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+10h] [rbp-20h]
double v4; // [rsp+18h] [rbp-18h]
double v5; // [rsp+20h] [rbp-10h]
double v6; // [rsp+28h] [rbp-8h]

v3 = a2[8] * a2[4] - a2[7] * a2[5];
v4 = a2[6] * a2[5] - a2[8] * a2[3];
v5 = a2[7] * a2[3] - a2[6] * a2[4];
v6 = 1.0 / (*a2 * v3 + a2[1] * v4 + a2[2] * v5);
*a1 = v6 * v3;
a1[1] = (a2[7] * a2[2] - a2[8] * a2[1]) * v6;
a1[2] = (a2[5] * a2[1] - a2[4] * a2[2]) * v6;
a1[3] = v6 * v4;
a1[4] = (a2[8] * *a2 - a2[6] * a2[2]) * v6;
a1[5] = (a2[3] * a2[2] - a2[5] * *a2) * v6;
a1[6] = v6 * v5;
a1[7] = (a2[6] * a2[1] - a2[7] * *a2) * v6;
result = a1 + 8;
a1[8] = (a2[4] * *a2 - a2[3] * a2[1]) * v6;
return result;
}