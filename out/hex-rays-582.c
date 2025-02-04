
# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2, double *a3)
{
_QWORD *result; // rax
__int64 v4; // [rsp+20h] [rbp-8h]
__int64 v5; // [rsp+20h] [rbp-8h]

v4 = (unsigned int)(int)*a3;
*a2 += v4;
*a3 = *a3 - (double)(int)v4;
v5 = *a2 / 86400LL;
*a1 += v5;
result = a2;
*a2 += -86400 * v5;
return result;
}