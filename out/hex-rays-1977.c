
# 1 
#include "defs.h"
double * func0(int a1, double *a2, double *a3, double a4)
{
double *v4; // rax
double v5; // xmm1_8
double *result; // rax

do
{
v4 = a2++;
v5 = *v4 * a4;
result = a3++;
*result = *result + v5;
--a1;
}
while ( a1 );
return result;
}