#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void Matrix4Mult(double a[][4], double b[][4], double c[][4])
{
 int i;
 int j;
 int k;
 for (i = 0; i < 4; i++)
 {
  for (j = 0; j < 4; j++)
  {
   c[i][j] = 0.0;
   for (k = 0; k < 4; k++)
   {
    c[i][j] = c[i][j] + a[i][k] * b[k][j];
   }

  }
 }
 return;
}