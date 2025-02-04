
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, int a3, char a4, int a5, double a6, double a7)
{
double *result; // rax

*a1 = 15.0 * ((double)a3 + a6 / 60.0) * 0.0174532925199;
result = a2;
*a2 = (a7 / 60.0 + (float)a5) * 0.0174532925199;
if ( a4 == 45 )
{
result = a2;
*a2 = -*a2;
}
return result;
}