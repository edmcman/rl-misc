
# 1 
#include "defs.h"
__int64  func0(int a1, __int64 a2, double *a3)
{
unsigned int v4; // [rsp+14h] [rbp-14h]
unsigned int v5; // [rsp+24h] [rbp-4h]

v4 = a1 - 1;
v5 = a1 - 1;
*a3 = *(double *)(8LL * (unsigned int)(a1 - 1) + a2);
while ( v4 )
{
if ( *(double *)(8LL * --v4 + a2) > *a3 )
{
*a3 = *(double *)(8LL * v4 + a2);
v5 = v4;
}
}
return v5;
}