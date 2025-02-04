#include <math.h>

#include <assert.h>

# 1 
#include "defs.h"
int * func0(__int64 a1, int *a2, int *a3)
{
int *result; // rax
int v4; // [rsp+24h] [rbp-4h]

if ( a1 && a2 )
{
if ( a3 )
{
v4 = *a2;
*a2 = *a3;
result = a3;
*a3 = v4;
}
}
return result;
}