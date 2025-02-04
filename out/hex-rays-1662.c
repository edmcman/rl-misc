
# 1 
#include "defs.h"
__m128  func0(unsigned int *a1)
{
return _mm_xor_ps((__m128)*a1, (__m128)0x80000000);
}