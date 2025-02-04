#include <stdlib.h>

#include <stdio.h>

#include <time.h>

# 1 
static void siftdown(int *x, int n)
{




 if (n < 2)
  return;

 int i, c;

 i = 1;
 x[0] = x[1];
 while (1) {
  c = i << 1;
  if (c > n)
   break;
  if ((c + 1) <= n && x[c + 1] > x[c])
   c++;
  if (x[0] >= x[c])
   break;
  x[i] = x[c];
  i = c;
 }
 x[i] = x[0];
}