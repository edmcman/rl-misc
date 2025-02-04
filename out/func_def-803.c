#include <stdio.h>

#include <math.h>

# 1 
static double rnd(unsigned long *next)
{
   double r;

   *next = *next * 1103515245L + 12345;
   r = (*next / 65536L) % 32768L;

   return (r / 32767);
}