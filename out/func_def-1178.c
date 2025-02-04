#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matTranspose(double m[16], double r[16])
{
  int i,j;
  double tmp[16];

  for(i=0;i<16;i++)
    tmp[i]=m[i];

  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      r[i*4+j]=tmp[j*4+i];

  return 0;
}