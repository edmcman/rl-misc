#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void Matrix3Mult(double a[][3],double b[][3],double c[][3])
{
 int i;
 int j;
 int k;
 for (i=0;i<3;i++)
 {
  for (j=0;j<3;j++)
  {
   c[i][j] = 0.0;
   for (k=0;k<3;k++)
   {
    c[i][j] = c[i][j] + a[i][k] * b[k][j];
   }

  }
 }
 return;
}