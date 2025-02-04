#include <math.h>

# 1 
float *cross_product(float *v1, float *v2, float *r)







{
  float t[3];

  t[0] = v1[1]*v2[2] - v1[2]*v2[1];
  t[1] = v1[2]*v2[0] - v1[0]*v2[2];
  t[2] = v1[0]*v2[1] - v1[1]*v2[0];
  r[0] = t[0]; r[1] = t[1]; r[2] = t[2];
  return(r);
}