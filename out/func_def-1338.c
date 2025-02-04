#include <math.h>

# 1 
void clean(double x[1000], int n) {
  int i;
  for (i = 0; i < n; i++)
    x[i] = 0;
}