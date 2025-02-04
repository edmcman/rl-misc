#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__m128 * func0(__m128 *a1, double a2, __m128 a3, __m128 a4)
{
__m128 *result; // rax

result = a1;
*a1 = a3;
a1[1] = a4;
return result;
}