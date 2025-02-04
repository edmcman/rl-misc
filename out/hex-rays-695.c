#include <math.h>

#include <stdlib.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(float *a1, float a2, float a3)
{
return (float)(a1[1] * a3) + (float)(*a1 * a2);
}