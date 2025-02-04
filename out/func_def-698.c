#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
void tranmat(double a[3][3],double b[3][3])
{
  int i,j;
  for (i=0; i<3; i++)
    for (j=0; j<3; j++)
      b[i][j] = a[j][i];
}