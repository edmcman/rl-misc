#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(double *a1, double *a2, double *a3, double *a4)
{
double v5; // [rsp+28h] [rbp-18h]
double v6; // [rsp+30h] [rbp-10h]
unsigned __int64 v7; // [rsp+38h] [rbp-8h]

v7 = __readfsqword(0x28u);
v5 = a1[1] - a4[1];
v6 = a1[2] - a4[2];
*a2 = v6 * a3[4] + *a3 * (*a1 - *a4) + v5 * a3[5];
a2[1] = v6 * a3[3] + a3[1] * v5;
a2[2] = v6 * a3[2];
return __readfsqword(0x28u) ^ v7;
}