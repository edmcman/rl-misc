#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, double *a3)
{
double v4; // [rsp+28h] [rbp-28h]
double v5; // [rsp+30h] [rbp-20h]
double v6; // [rsp+38h] [rbp-18h]

v4 = a2[13] * a1[3] + *a1 * a2[1] + a2[5] * a1[1] + a2[9] * a1[2];
v5 = a2[14] * a1[3] + *a1 * a2[2] + a2[6] * a1[1] + a2[10] * a1[2];
v6 = a2[15] * a1[3] + *a1 * a2[3] + a2[7] * a1[1] + a2[11] * a1[2];
*a3 = a2[12] * a1[3] + *a1 * *a2 + a2[4] * a1[1] + a2[8] * a1[2];
a3[1] = v4;
a3[2] = v5;
a3[3] = v6;
return 0LL;
}