#include <math.h>

# 1 
static int Parabolic_Minimum( double x[], double y[], double *xmin)
{
 double d1 = (x[3] - x[2]) * (y[1] - y[2]);
 double d2 = (x[2] - x[1]) * (y[3] - y[2]);
 double denominator = d1 + d2;
 double numerator = (x[3] + x[2]) * d1 + (x[2] + x[1]) * d2;
 if (denominator == 0.0)
 {


  *xmin = (y[1] < y[3]) ? x[1] : x[3];
  return -1;
 }
 if (denominator < 0.0)
 {


  *xmin = (y[1] < y[3]) ? x[1] : x[3];
  return -2;
 } *xmin = 0.5 * numerator / denominator;
 return 0;
}