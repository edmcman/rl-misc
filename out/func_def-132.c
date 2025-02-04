#include <math.h>

#include <assert.h>

# 1 
void swizzle_coords_i(int* x, int* y, int* z) {
 if (!x || !y || !z)
  return;
 do { int t = *y; *y = *z; *z = t; } while (0);
}