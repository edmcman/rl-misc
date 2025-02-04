
# 1 
#include "defs.h"
double * func0(__int64 a1, int a2, double a3)
{
double *result; // rax

result = (double *)(8 * (2 * a2 + 1LL) + a1);
*result = a3;
return result;
}