
# 1 
#include "defs.h"
unsigned __int64  func0(unsigned __int16 *a1)
{
unsigned __int64 v2; // [rsp+18h] [rbp-18h]
unsigned __int16 v3; // [rsp+26h] [rbp-Ah]
unsigned __int64 v4; // [rsp+28h] [rbp-8h]

v4 = __readfsqword(0x28u);
v3 = -6547 * a1[1] - 8468 * *a1 + ((58989 * (unsigned int)*a1 + 11) >> 16);
v2 = 58989 * a1[2]
+ 57068 * a1[1]
+ 5 * *a1
+ ((58989LL * a1[1] + 57068LL * *a1 + ((58989 * (unsigned __int64)*a1 + 11) >> 16)) >> 16);
*a1 = -6547 * *a1 + 11;
a1[1] = v3;
a1[2] = v2;
return __readfsqword(0x28u) ^ v4;
}