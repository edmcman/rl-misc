#include <stdlib.h>   

#include <string.h>   

#include <math.h>     

#include <ctype.h>

# 1 
static void solve2(double m[][2], double *b, double *x)
{
  double det;

  det = m[0][0]*m[1][1] - m[0][1]*m[1][0];

  if (det==0)
    return;

  x[0] = ( b[0]*m[1][1] - b[1]*m[1][0] ) / det;
  x[1] = ( m[0][0]*b[1] - m[0][1]*b[0] ) / det;
}