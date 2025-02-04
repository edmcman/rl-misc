
# 1 
#include "defs.h"
double  func0(double *a1, float *a2, double a3)
{
return (a3 - a1[1]) * (a2[2] * (a3 - *a1)) / ((a1[2] - *a1) * (a1[2] - a1[1]))
+ (a3 - a1[2]) * (*a2 * (a3 - a1[1])) / ((*a1 - a1[1]) * (*a1 - a1[2]))
+ (a3 - a1[2]) * (a2[1] * (a3 - *a1)) / ((a1[1] - *a1) * (a1[1] - a1[2]));
}