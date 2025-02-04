
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 9; ++i )
{
result = *(unsigned int *)(4LL * i + a2);
*(_DWORD *)(4LL * i + a1) = result;
}
return result;
}