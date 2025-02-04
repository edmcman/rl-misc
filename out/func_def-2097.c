#include <math.h>

# 1 
void crossprod_st(double *out, const double *a, const double *b, int st)
{
   int st2 = 2 * st;
   *out = a[st]*b[st2] - a[st2]*b[st];
   out[1] = a[st2]*b[0] - a[0]*b[st2];
   out[2] = a[0]*b[st] - a[st]*b[0];
}