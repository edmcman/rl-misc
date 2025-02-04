#include <math.h>

#include <assert.h>

#include <string.h>

#include <stdio.h>

# 1 
static char
getdigit(double *val, int *cnt)
{
  int digit;
  double d;
  if( (*cnt)++ >= 16 ) return '0';
  digit = (int)*val;
  d = digit;
  digit += '0';
  *val = (*val - d)*10.0;
  return (char)digit;
}