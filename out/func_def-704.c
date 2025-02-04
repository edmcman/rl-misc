#include <stdio.h>

# 1 
void ltr_int_cross_product(double vec1[3],double vec2[3],double res[3])
{
  res[0]=vec1[1]*vec2[2]-vec1[2]*vec2[1];
  res[1]=vec1[2]*vec2[0]-vec1[0]*vec2[2];
  res[2]=vec1[0]*vec2[1]-vec1[1]*vec2[0];
}