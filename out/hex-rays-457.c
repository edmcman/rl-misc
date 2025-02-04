#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
*a1 = *a1 * a2;
a1[1] = a1[1] * a3;
a1[2] = a1[2] * a4;
return a1;
}