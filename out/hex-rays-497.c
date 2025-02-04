#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, __int64 a2)
{
double *result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (double *)(8LL * i + a1);
*result = *result - *(double *)(8LL * i + a2) / 82.30055985272827;
}
return result;
}