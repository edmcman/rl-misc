#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
int matfCalcDiff(float *v1, float *v2, float *v3)
{
  v3[0]=v1[0]-v2[0];
  v3[1]=v1[1]-v2[1];
  v3[2]=v1[2]-v2[2];
  return 0;
}