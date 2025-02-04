#include <math.h>

# 1 
double *lqmul(double *a, double *b, double *amulb)







{
  double ab[4];

  ab[0] = a[0]*b[0] - (a[1]*b[1]+a[2]*b[2]+a[3]*b[3]);
  ab[1] = a[0]*b[1] + b[0]*a[1] + a[2]*b[3]-a[3]*b[2];
  ab[2] = a[0]*b[2] + b[0]*a[2] + a[3]*b[1]-a[1]*b[3];
  ab[3] = a[0]*b[3] + b[0]*a[3] + a[1]*b[2]-a[2]*b[1];
  amulb[0] = ab[0]; amulb[1] = ab[1]; amulb[2] = ab[2]; amulb[3] = ab[3];
  return(amulb);
}