
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
int i; // [rsp+20h] [rbp-8h]
int j; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
*(double *)(a3 + 32LL * i + 8LL * j) = *(double *)(a2 + 32LL * i + 8LL * j) + *(double *)(a1 + 32LL * i + 8LL * j);
}
return 0LL;
}