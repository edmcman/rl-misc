
# 1 
#include "defs.h"
__m128 * func0(__m128 *a1, __m128 *a2, __m128 *a3)
{
__m128 *result; // rax

result = a1;
*a3 = _mm_sub_ps(
_mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 9), _mm_shuffle_ps(*a2, *a2, 18)),
_mm_mul_ps(_mm_shuffle_ps(*a1, *a1, 18), _mm_shuffle_ps(*a2, *a2, 9)));
return result;
}