#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int i; // [rsp+8h] [rbp-10h]
int j; // [rsp+Ch] [rbp-Ch]
__int64 v4; // [rsp+10h] [rbp-8h]

for ( i = 0; i <= 2; ++i )
{
result = (unsigned int)i;
for ( j = i; j <= 2; ++j )
{
v4 = *(_QWORD *)(a1 + 24LL * i + 8LL * j);
*(_QWORD *)(24LL * i + a1 + 8LL * j) = *(_QWORD *)(24LL * j + a1 + 8LL * i);
result = i;
*(_QWORD *)(24LL * j + a1 + 8LL * i) = v4;
}
}
return result;
}