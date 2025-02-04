#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float *a3)
{
*a3 = (float)(a2[12] * a1[3]) + (float)((float)((float)(*a1 * *a2) + (float)(a2[4] * a1[1])) + (float)(a2[8] * a1[2]));
a3[1] = (float)(a2[13] * a1[3])
+ (float)((float)((float)(*a1 * a2[1]) + (float)(a2[5] * a1[1])) + (float)(a2[9] * a1[2]));
a3[2] = (float)(a2[14] * a1[3])
+ (float)((float)((float)(*a1 * a2[2]) + (float)(a2[6] * a1[1])) + (float)(a2[10] * a1[2]));
a3[3] = (float)(a2[15] * a1[3])
+ (float)((float)((float)(*a1 * a2[3]) + (float)(a2[7] * a1[1])) + (float)(a2[11] * a1[2]));
return 0LL;
}