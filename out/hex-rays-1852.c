#include <stdio.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1)
{
_QWORD *result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 1; ++i )
{
result = (_QWORD *)(8LL * i + a1);
*result = 0LL;
}
return result;
}