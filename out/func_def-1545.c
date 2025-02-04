#include <math.h>

#include <assert.h>

# 1 
void swizzle_coords_f(float* x, float* y, float* z) {
 if (!x || !y || !z)
  return;
 do { float t = *y; *y = *z; *z = t; } while (0);

}