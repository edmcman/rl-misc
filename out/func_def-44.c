#include <stdio.h>

#include <math.h>

# 1 
void TransformPoint(double x, double y, double z, double *x1, double *y1,
      double *z1, double m[3][3])
{
        *x1 = x * m[0][0] + y * m[0][1] + z * m[0][2];
        *y1 = x * m[1][0] + y * m[1][1] + z * m[1][2];
        *z1 = x * m[2][0] + y * m[2][1] + z * m[2][2];
}