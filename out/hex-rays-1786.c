#include <stddef.h>

#include <assert.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

# 1 
#include "defs.h"
__int64 * func0(__int64 *a1, char a2, int a3)
{
__int64 v3; // rdx
__int64 *result; // rax

if ( a3 )
v3 = *a1 | (1LL << a2);
else
v3 = *a1 & ~(1LL << a2);
result = a1;
*a1 = v3;
return result;
}