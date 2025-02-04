#include <stdio.h>

# 1 
int my_max(int *x, int *y)
{
  *x = *x > *y ? *x:*y;
  *y = 0;
  return *x;
}