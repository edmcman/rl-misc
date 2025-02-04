
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
result = (_DWORD *)(4LL * i + a1);
*result = 0;
}
return result;
}