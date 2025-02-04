
# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, unsigned int *a3)
{
int v5; // [rsp+24h] [rbp-Ch]
unsigned int n; // [rsp+28h] [rbp-8h]
int n_4; // [rsp+2Ch] [rbp-4h]

v5 = 0;
n = *a3;
while ( v5 < (int)*a3 )
{
n_4 = send(a1, (const void *)(v5 + a2), n, 0);
if ( n_4 == -1 )
{
*a3 = v5;
return 0xFFFFFFFFLL;
}
v5 += n_4;
n -= n_4;
}
return 0LL;
}