#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1, __int64 a2)
{
_QWORD *result; // rax
__int64 i; // [rsp+18h] [rbp-8h]

for ( i = 0LL; i <= 2; ++i )
{
result = (_QWORD *)(8 * i + a1);
*result -= 2 * *(_QWORD *)(8 * i + a2) * (*result > *(_QWORD *)(8 * i + a2));
}
return result;
}