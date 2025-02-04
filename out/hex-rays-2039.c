
# 1 
#include "defs.h"
__int64  func0(unsigned __int16 *a1, __int16 a2, __int16 a3)
{
__int64 result; // rax

*a1 = (((__int16)a1[1] * (__int64)a3) >> 14) + (a2 >> 7) - a1[2];
a1[2] = a1[1];
result = *a1;
a1[1] = result;
return result;
}