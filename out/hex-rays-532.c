#include <stdarg.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, double *a3)
{
*a3 = a2[2] * a1[1] - a2[1] * a1[2] + *a3;
a3[1] = *a2 * a1[2] - a2[2] * *a1 + a3[1];
a3[2] = a2[1] * *a1 - *a2 * a1[1] + a3[2];
return 0LL;
}