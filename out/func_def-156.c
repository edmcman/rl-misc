#include <string.h>

#include <math.h>

# 1 
static void rotate_matrix( float const* in, float s, float c, float* out )
{
 int n = 3;
 while ( n-- )
 {
  float i = *in++;
  float q = *in++;
  *out++ = i * c - q * s;
  *out++ = i * s + q * c;
 }
}