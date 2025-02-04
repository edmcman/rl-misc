#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
void deg2rad(double dalpha, double ddelta, double *ralpha, double *rdelta)
{
  *ralpha = 3.141592653589793 * dalpha / 180.0;
  *rdelta = 3.141592653589793 * ddelta / 180.0;
}