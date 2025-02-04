#include <math.h>

# 1 
float *qconj(float *a, float *astar)






{
  astar[0] = a[0]; astar[1] = -a[1]; astar[2] = -a[2]; astar[3] = -a[3];
  return(astar);
}