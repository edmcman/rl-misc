#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(float *a1, float *a2)
{
return (float)(a2[1] * a1[1]) + (float)(*a1 * *a2);
}