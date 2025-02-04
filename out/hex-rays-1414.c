
# 1 
#include "defs.h"
float  func0(float *a1, float *a2, float *a3)
{
return (float)((float)((float)((float)(a2[2] * (float)(*a3 * a1[1]))
+ (float)((float)((float)(*a1 * a2[1]) * a3[2]) + (float)(a1[2] * (float)(*a2 * a3[1]))))
- (float)(a3[2] * (float)(*a2 * a1[1])))
- (float)(a2[2] * (float)(*a1 * a3[1])))
- (float)(a1[2] * (float)(*a3 * a2[1]));
}