#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

# 1 
float *Filter(float coeff_r, float coeff_g, float coeff_b, float *RGB)
{
 RGB[0] *= coeff_r;
 RGB[1] *= coeff_g;
 RGB[2] *= coeff_b;

 return RGB;
}