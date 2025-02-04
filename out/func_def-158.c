#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <assert.h>

#include <string.h>

# 1 
static void
cross3(const double v0[3],
       const double v1[3],
       double cross[3])
{
  cross[0] = v0[1] * v1[2] - v0[2] * v1[1];
  cross[1] = v0[2] * v1[0] - v0[0] * v1[2];
  cross[2] = v0[0] * v1[1] - v0[1] * v1[0];
}