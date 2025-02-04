#include <stdio.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(float *a1, float *a2)
{
return (float)(a2[3] * a1[3]) + (float)((float)((float)(*a1 * *a2) + (float)(a2[1] * a1[1])) + (float)(a2[2] * a1[2]));
}