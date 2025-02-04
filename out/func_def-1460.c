#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <string.h>

#include <assert.h>

# 1 
void cross(float *x1, float *x2, float *x3) {
  x3[0] = x3[1] = x3[2] = 0;

  x3[0] += (x1[1]*x2[2]);
  x3[0] -= (x1[2]*x2[1]);
  x3[1] += (x1[2]*x2[0]);
  x3[1] -= (x1[0]*x2[2]);
  x3[2] += (x1[0]*x2[1]);
  x3[2] -= (x1[1]*x2[0]);

}