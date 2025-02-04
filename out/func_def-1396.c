#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matMakeScale(double a, double b, double c, double *rm)
{
  int i;

  for(i=0;i<16;i++)
    rm[i]=0.0;

  rm[0]=a;
  rm[5]=b;
  rm[10]=c;
  rm[15]=1.0;
  return 0;
}