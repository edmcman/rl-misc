
# 1 
#include "defs.h"
unsigned __int64  func0(__int16 *a1, __int64 a2)
{
unsigned __int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int v4; // [rsp+1Ch] [rbp-4h]

result = (unsigned int)((*a1 + 3) >> 3);
v4 = (*a1 + 3) >> 3;
for ( i = 0; i <= 15; ++i )
{
result = 32LL * i + a2;
*(_WORD *)result = v4;
}
return result;
}