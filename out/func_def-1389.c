#include <stdio.h>

#include <stdlib.h>

# 1 
int flocate (float *xx, int n, float x)







{
  int ju=0, jm=0, jl=0, j=0;
  int monotonicity=0;

  jl=0;
  ju=n+1;

  if (n==1)
    monotonicity=1;
  else if (xx[1]>xx[0])
    monotonicity=1;

  xx-=1;

  while (ju-jl > 1) {
    jm=(ju+jl) >> 1;

    if ((x >= xx[jm] && monotonicity==1) || (x <= xx[jm] && monotonicity==0))
      jl=jm;
    else
      ju=jm;
  }

  if (x == xx[1]) {
    j=1;
  }
  else {
    if (x == xx[n])
      j=n-1;
    else
      j=jl;
  }

  j-=1;

  return j;
}