








# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
int j; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 4; ++i )
{
for ( j = 0; j <= 4; ++j )
*(_QWORD *)(a1 + 40LL * i + 8LL * j) = 0LL;
}
*(double *)(a1 + 120) = a2;
result = a1;
*(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 120);
return result;
}