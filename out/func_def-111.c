#include <math.h>

# 1 
double modf(double x, double *ipart)
{
 long p = (long) x;

 *ipart = p;

 return x - p;
}