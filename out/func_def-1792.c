#include <math.h>

#include <float.h>

#include <stdint.h>

# 1 
double modf(double x, double *iptr) {
 return __builtin_modf(x, iptr);
}