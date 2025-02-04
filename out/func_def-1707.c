#include <stdio.h>

# 1 
void swap(double *a, double *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}