#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float *a3)
{
*a3 = (float)(a2[2] * a1[1]) - (float)(a1[2] * a2[1]);
a3[1] = (float)(*a2 * a1[2]) - (float)(*a1 * a2[2]);
a3[2] = (float)(a2[1] * *a1) - (float)(a1[1] * *a2);
return 0LL;
}