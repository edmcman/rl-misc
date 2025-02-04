#include <math.h>

#include <float.h>

# 1 
static int solve_degree_1(const double * c, double * x)
{
 if(c[1] == 0)
  return 0;

 x[0] = -c[0] / c[1];
 return 1;
}