#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 1; i <= 2; ++i )
{
if ( *(int *)(4LL * i + a1) <= 43 || *(int *)(4LL * i + a1) > 107 )
{
result = (_DWORD *)*(unsigned int *)(4LL * i + a1);
if ( (int)result > 107 )
{
result = (_DWORD *)*(unsigned int *)(4LL * i + a1);
if ( (int)result <= 127 )
{
result = (_DWORD *)(4LL * i + a1);
*result += 128;
}
}
}
else
{
result = (_DWORD *)(4LL * i + a1);
*result += 64;
}
}
return result;
}