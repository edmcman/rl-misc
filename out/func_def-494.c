#include <string.h>

#include <strings.h>

#include <ctype.h>

#include <sys/types.h>

#include <stdarg.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
static double my_modf(double x0, double *iptr)
{
 int i;
 long l;
 double x = x0;
 double f = 1.0;

 for (i=0;i<100;i++) {
  l = (long)x;
  if (l <= (x+1) && l >= (x-1)) break;
  x *= 0.1;
  f *= 10.0;
 }

 if (i == 100) {

  (*iptr) = 0;
  return 0;
 }

 if (i != 0) {
  double i2;
  double ret;

  ret = my_modf(x0-l*f, &i2);
  (*iptr) = l*f + i2;
  return ret;
 }

 (*iptr) = l;
 return x - (*iptr);
}