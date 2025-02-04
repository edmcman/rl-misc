#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matAddV(double *v1,double *v2)
{
  v1[0]+=v2[0];
  v1[1]+=v2[1];
  v1[2]+=v2[2];
  return 0;
}