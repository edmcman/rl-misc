#include <math.h>

# 1 
double modf(double x, double *intpart)
{
    *intpart = (int)x;
    return x-((double)*intpart);
}