#include <stdio.h>

# 1 
void intercambio(int *x, int *y)
{
  int z = *x;
  *x = *y;
  *y = z;
}