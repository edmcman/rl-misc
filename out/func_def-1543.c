#include <math.h>

# 1 
static void
vadd(float dst[3], float a[3], float b[3])
{
  dst[0] = a[0] + b[0];
  dst[1] = a[1] + b[1];
  dst[2] = a[2] + b[2];
}