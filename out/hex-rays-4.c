#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1, __int64 a2, __int64 a3)
{
_QWORD *result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (_QWORD *)(8LL * i + a1);
*result = 2LL * *(_QWORD *)(8LL * i + a2) + *(_QWORD *)(8LL * i + a3);
}
return result;
}