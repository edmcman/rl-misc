#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void derivateTerm(double coef, double exp, double *coefDest, double *expDest){
  *coefDest = coef * exp;
  *expDest = exp - 1;
}