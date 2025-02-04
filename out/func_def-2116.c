#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void Matrix4Equal(double a[][4], double b[][4])
{
 int i;
 int j;
 for (i = 0; i < 4; i++)
 {
  for (j = 0; j < 4; j++)
  {
   b[i][j] = a[i][j];
  }
 }
 return;
}