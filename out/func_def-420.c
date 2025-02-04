#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matMakeTrans(double a, double b, double c, double *rm)
{
  int i;

  for(i=0;i<16;i++)
    rm[i]=0.0;

  rm[0]=1.0;
  rm[5]=1.0;
  rm[10]=1.0;
  rm[15]=1.0;

  rm[12]=a;
  rm[13]=b;
  rm[14]=c;
  return 0;
}