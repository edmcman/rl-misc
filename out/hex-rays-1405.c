
# 1 
#include "defs.h"
__m128 * func0(__m128 *a1, __m128 *a2, __m128 *a3)
{
__m128 *result; // rax
__m128 v4; // xmm7

result = a1;
v4 = *a2;
*a3 = _mm_add_ps(
_mm_add_ps(_mm_mul_ps(*a1, _mm_shuffle_ps(v4, v4, 0)), _mm_mul_ps(a1[1], _mm_shuffle_ps(v4, v4, 85))),
_mm_add_ps(_mm_mul_ps(a1[2], _mm_shuffle_ps(v4, v4, 170)), _mm_mul_ps(a1[3], _mm_shuffle_ps(v4, v4, 255))));
return result;
}