#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1, __int64 a2)
{
_QWORD *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 13; ++i )
{
*(_QWORD *)(8LL * i + a1) = 0LL;
result = (_QWORD *)(8LL * i + a2);
*result = 0LL;
}
return result;
}