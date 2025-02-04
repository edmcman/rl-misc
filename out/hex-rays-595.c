
# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-4h]

result = a2;
for ( i = 0; i <= 9; ++i )
{
result = (unsigned __int8)a2;
*(_BYTE *)(a1 + i) = a2;
}
return result;
}