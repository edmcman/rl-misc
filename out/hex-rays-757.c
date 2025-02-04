
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 15; ++i )
{
result = a1;
*(_DWORD *)(a1 + 4LL * i) += *(_DWORD *)(a2 + 4LL * i);
}
return result;
}