#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int i; // [rsp+14h] [rbp-4h]
int j; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = (_DWORD *)(4LL * i + a1);
*result = 0;
}
for ( j = 0; j <= 15; j += 5 )
{
result = (_DWORD *)(4LL * j + a1);
*result = 1065353216;
}
return result;
}