#include <stdlib.h>

#include <sys/time.h>

# 1 
#include "defs.h"
__int64 * func0(__int64 *a1)
{
__int64 *result; // rax

result = a1;
*a1 = (25173 * *a1 + 13849) % 0x10000;
return result;
}