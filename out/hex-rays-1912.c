
# 1 
#include "defs.h"
__m128 * func0(__m128 *a1, __m128 *a2, float *a3)
{
__m128 *result; // rax
__m128 v4; // xmm0
__m128 v5; // xmm0

result = a1;
v4 = _mm_mul_ps(*a1, *a2);
v5 = _mm_add_ps(_mm_movehl_ps(*a2, v4), v4);
*a3 = v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 1).m128_f32[0];
return result;
}