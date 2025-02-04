#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2)
{
double v2; // xmm0_8
int v4; // [rsp+18h] [rbp-18h]
int i; // [rsp+1Ch] [rbp-14h]
int j; // [rsp+20h] [rbp-10h]
int k; // [rsp+20h] [rbp-10h]
int m; // [rsp+20h] [rbp-10h]
int l; // [rsp+24h] [rbp-Ch]
double v10; // [rsp+28h] [rbp-8h]

v4 = 0;
LABEL_23:
if ( v4 > 2 )
return 1LL;
for ( i = v4 + 1; ; ++i )
{
if ( i > 2 )
{
++v4;
goto LABEL_23;
}
v10 = 0.0;
for ( j = 0; j <= 2; ++j )
v10 = *(double *)(a1 + 24LL * i + 8LL * j) * *(double *)(a1 + 24LL * v4 + 8LL * j) + v10;
if ( v10 > a2 )
break;
}
for ( k = 0; k <= 2; ++k )
{
if ( k != v4 && k != i )
{
for ( l = 0; l <= 2; ++l )
{
v2 = *(double *)(a1 + 24LL * v4 + 8LL * l);
*(double *)(a1 + 24LL * k + 8LL * l) = v2 + v2 + *(double *)(a1 + 24LL * k + 8LL * l);
}
break;
}
}
for ( m = 0; m <= 2; ++m )
*(double *)(a1 + 24LL * v4 + 8LL * m) = -*(double *)(a1 + 24LL * v4 + 8LL * m);
return 0LL;
}