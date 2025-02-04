#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(double *a1, double *a2, double *a3)
{
double v4; // [rsp+28h] [rbp-18h]
double v5; // [rsp+30h] [rbp-10h]
unsigned __int64 v6; // [rsp+38h] [rbp-8h]

v6 = __readfsqword(0x28u);
v4 = a1[2] * a2[5] + a2[3] * *a1 + a1[1] * a2[4];
v5 = a1[2] * a2[8] + a2[6] * *a1 + a1[1] * a2[7];
*a3 = a1[2] * a2[2] + *a2 * *a1 + a1[1] * a2[1];
a3[1] = v4;
a3[2] = v5;
return __readfsqword(0x28u) ^ v6;
}