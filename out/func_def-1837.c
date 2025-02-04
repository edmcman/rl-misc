#include <math.h>

# 1 
double frexp(double x, int *exptr)
{
 int i = 0;
 while (x > 1) {
  x = x / 2.0;
  i++;
 }
 *exptr = i;
 return x;
}