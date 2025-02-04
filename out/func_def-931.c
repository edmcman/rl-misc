#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void Matrix4MultValue(double a[][4], double Value, double c[][4])
{
 int i;
 int j;
 for (i = 0; i < 4; i++)
 {
  for (j = 0; j < 4; j++)
  {
   c[i][j] = a[i][j] * Value;
  }
 }
 return;
}