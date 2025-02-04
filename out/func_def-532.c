#include <stdarg.h>

#include <string.h>

#include <stdio.h>

# 1 
int cd_mat_cross(const double a[3], const double b[3], double res[3])
{
   res[0] += a[1]*b[2] - a[2]*b[1];
   res[1] += a[2]*b[0] - a[0]*b[2];
   res[2] += a[0]*b[1] - a[1]*b[0];
   return 0;
}