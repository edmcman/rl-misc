#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matCopyMM(double *m1, double *m2)
{
  int i;
  for(i=0;i<16;i++)
    m2[i]=m1[i];

  return 0;
}