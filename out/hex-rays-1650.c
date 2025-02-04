#include <stdlib.h>   

#include <string.h>   

#include <math.h>     

#include <ctype.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax
double v4; // [rsp+20h] [rbp-8h]

result = a1 + 2;
v4 = a1[3] * *a1 - a1[2] * a1[1];
if ( v4 != 0.0 )
{
*a3 = (a1[3] * *a2 - a1[2] * a2[1]) / v4;
result = a3 + 1;
a3[1] = (a2[1] * *a1 - *a2 * a1[1]) / v4;
}
return result;
}