#include <stdio.h>

# 1 
static void swp(double *f1, double *f2)
{
  double tmp;
  tmp = *f1;
  *f1 = *f2;
  *f2 = tmp;
}