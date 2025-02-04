#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matMultMM(double *m1, double *m2, double *mr)
{
  int i,j,k;
  double tmp;

  for(j=0;j<4;j++)
    for(i=0;i<4;i++) {
      tmp=0.0;
      for(k=0;k<4;k++)
 tmp+=m2[k*4+i]*m1[j*4+k];
      mr[j*4+i]=tmp;
    }
  return 0;
}