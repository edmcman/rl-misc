#include <math.h>

# 1 
#include "defs.h"
double  func0(double x, double *ipart)
{
*ipart = (double)(int)x;
return x - (double)(int)x;
}