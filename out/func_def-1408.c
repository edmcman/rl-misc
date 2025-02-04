#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <limits.h>

#include <time.h>

# 1 
void vecdot(double *dot, const double *u, const double *v, size_t n){
 int k;
 (*dot) = 0.0;
 for(k = 0; k < n; k++){
  (*dot) += u[k] * v[k];
 }
}