
# 1 
#include "defs.h"
float  func0(float *a1)
{
float v1; // xmm0_4
float v2; // xmm1_4

v1 = (float)((float)(a1[7] * (float)((float)(a1[12] * a1[1]) * a1[10]))
+ (float)((float)((float)((float)((float)(a1[3] * (float)((float)(a1[8] * a1[5]) * a1[14]))
+ (float)((float)((float)((float)(a1[3]
* (float)((float)(a1[12] * a1[9]) * a1[6]))
- (float)(a1[3]
* (float)((float)(a1[8] * a1[13]) * a1[6])))
- (float)(a1[3] * (float)((float)(a1[12] * a1[5]) * a1[10])))
+ (float)(a1[3] * (float)((float)(a1[4] * a1[13]) * a1[10]))))
- (float)(a1[3] * (float)((float)(a1[4] * a1[9]) * a1[14])))
- (float)(a1[7] * (float)((float)(a1[12] * a1[9]) * a1[2])))
+ (float)(a1[7] * (float)((float)(a1[8] * a1[13]) * a1[2]))))
- (float)(a1[7] * (float)((float)(*a1 * a1[13]) * a1[10]));
v2 = (float)((float)((float)((float)(a1[11] * (float)((float)(a1[4] * a1[1]) * a1[14]))
+ (float)((float)((float)((float)((float)(a1[11] * (float)((float)(a1[12] * a1[5]) * a1[2]))
+ (float)((float)(v1
- (float)(a1[7]
* (float)((float)(a1[8] * a1[1])
* a1[14])))
+ (float)(a1[7]
* (float)((float)(*a1 * a1[9]) * a1[14]))))
- (float)(a1[11] * (float)((float)(a1[4] * a1[13]) * a1[2])))
- (float)(a1[11] * (float)((float)(a1[12] * a1[1]) * a1[6])))
+ (float)(a1[11] * (float)((float)(*a1 * a1[13]) * a1[6]))))
- (float)(a1[11] * (float)((float)(*a1 * a1[5]) * a1[14])))
- (float)(a1[15] * (float)((float)(a1[8] * a1[5]) * a1[2])))
+ (float)(a1[15] * (float)((float)(a1[4] * a1[9]) * a1[2]));
return (float)(a1[15] * (float)((float)(*a1 * a1[5]) * a1[10]))
+ (float)((float)((float)((float)(a1[15] * (float)((float)(a1[8] * a1[1]) * a1[6])) + v2)
- (float)(a1[15] * (float)((float)(*a1 * a1[9]) * a1[6])))
- (float)(a1[15] * (float)((float)(a1[4] * a1[1]) * a1[10])));
}