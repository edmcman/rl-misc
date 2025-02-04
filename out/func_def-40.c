#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
void Matrix3MultVec(double R[3][3], double vec1[3], double vec2[3])
{
 int i;
 int j;
 for (i=0;i<3;i++)
 {
  vec2[i] = 0;
  for (j=0;j<3;j++)
  {
   vec2[i] = vec2[i] + R[i][j] * vec1[j];
  }
 }
 return;
}