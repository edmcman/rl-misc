#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(float *a1)
{
float v1; // xmm1_4

v1 = (float)((float)((float)((float)(a1[15] * a1[8]) - (float)(a1[12] * a1[11]))
* (float)((float)(a1[6] * a1[1]) - (float)(a1[5] * a1[2])))
+ (float)((float)((float)((float)((float)(a1[15] * a1[10]) - (float)(a1[14] * a1[11]))
* (float)((float)(a1[5] * *a1) - (float)(a1[4] * a1[1])))
- (float)((float)((float)(a1[15] * a1[9]) - (float)(a1[13] * a1[11]))
* (float)((float)(a1[6] * *a1) - (float)(a1[4] * a1[2]))))
+ (float)((float)((float)(a1[14] * a1[9]) - (float)(a1[13] * a1[10]))
* (float)((float)(a1[7] * *a1) - (float)(a1[4] * a1[3])))))
- (float)((float)((float)(a1[14] * a1[8]) - (float)(a1[12] * a1[10]))
* (float)((float)(a1[7] * a1[1]) - (float)(a1[5] * a1[3])));
return (float)((float)((float)(a1[13] * a1[8]) - (float)(a1[12] * a1[9]))
* (float)((float)(a1[7] * a1[2]) - (float)(a1[6] * a1[3])))
+ v1;
}