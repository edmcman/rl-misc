#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
float  func0(float *a1, float *a2)
{
*a1 = *a1 + 41.0;
*a2 = *a2 + 1.0;
return *a2 + *a1;
}