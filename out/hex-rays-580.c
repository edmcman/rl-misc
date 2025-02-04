
# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2, int *a3)
{
int v4; // [rsp+24h] [rbp-4h]
int v5; // [rsp+24h] [rbp-4h]
int v6; // [rsp+24h] [rbp-4h]

if ( *a1 > *a2 )
{
v4 = *a1;
*a1 = *a2;
*a2 = v4;
}
if ( *a1 > *a3 )
{
v5 = *a1;
*a1 = *a3;
*a3 = v5;
}
if ( *a2 > *a3 )
{
v6 = *a2;
*a2 = *a3;
*a3 = v6;
}
return 0LL;
}