#include <stdio.h>

#include <math.h>

#include <complex.h>

# 1 
int power_two(int x, int *pow)
{
 if (x<1) {return 2;}
 else if (x==1)
 {
  (*pow)=0;
  return 0;
 }
 else
 {
  int ret=1;
  (*pow)=0;
  double y=(double)x;
  while (y>=2.0)
  {
   (*pow)++;

   if (y==2.0) {ret=0;}
   y/=2.0;
  }
  return ret;
 }
}