#include <stdlib.h>

#include <math.h>

# 1 
static void quad_3_grad(double grad[3], const double g[3], const double H[6],
                        const double r[3])
{
  grad[0] = g[0] + (H[0]*r[0]+H[1]*r[1]+H[2]*r[2]);
  grad[1] = g[1] + (H[1]*r[0]+H[3]*r[1]+H[4]*r[2]);
  grad[2] = g[2] + (H[2]*r[0]+H[4]*r[1]+H[5]*r[2]);
}