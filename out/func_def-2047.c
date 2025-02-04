#include <stdint.h>

#include <math.h>

# 1 
static void
interpolate_color(float a, const float *c1, const float *c2, float *c)
{
 c[0] = (1.0-a)*c1[0] + a*c2[0];
 c[1] = (1.0-a)*c1[1] + a*c2[1];
 c[2] = (1.0-a)*c1[2] + a*c2[2];
}