#include <stdio.h>

# 1 
#include "defs.h"
__int64 * func0(__int64 *a1, __int64 *a2)
{
__int64 *result; // rax
__int64 v3; // [rsp+18h] [rbp-8h]

v3 = *a1;
*a1 = *a2;
result = a2;
*a2 = v3;
return result;
}