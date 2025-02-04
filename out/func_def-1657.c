#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <math.h>

# 1 
float dotProduct(float *vec1, float *vec2, int size) {
 float d = 0;
 for (int i = 0; i < size; i++)
  d += (*(vec1+i) * *(vec2+i));
 return d;
}