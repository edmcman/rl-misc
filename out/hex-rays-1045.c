
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int16 a2)
{
unsigned int v3; // [rsp+10h] [rbp-1Ch]

v3 = (__int16)((*(__int16 *)(a1 + 2) * (__int64)*(__int16 *)(a1 + 2)
+ *(__int16 *)(a1 + 4) * (__int64)*(__int16 *)(a1 + 4)
- ((*(__int16 *)(a1 + 2) * (__int64)a2) >> 14) * *(__int16 *)(a1 + 4)) >> 9);
*(_WORD *)(a1 + 2) = 0;
*(_WORD *)(a1 + 4) = 0;
return v3;
}