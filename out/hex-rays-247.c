






# 1 
#include "defs.h"
_DWORD * func0(__int64 a1)
{
_DWORD *result; // rax
int v2; // [rsp+14h] [rbp-4h]

v2 = 16;
while ( --v2 >= 0 )
{
result = (_DWORD *)(4LL * v2 + a1);
*result = 0;
}
return result;
}