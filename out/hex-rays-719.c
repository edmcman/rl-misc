#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, double a2)
{
int v3; // [rsp+18h] [rbp-18h]
int i; // [rsp+1Ch] [rbp-14h]
int j; // [rsp+20h] [rbp-10h]
int k; // [rsp+20h] [rbp-10h]
int m; // [rsp+20h] [rbp-10h]
int l; // [rsp+24h] [rbp-Ch]
double v9; // [rsp+28h] [rbp-8h]

v3 = 0;
LABEL_22:
if ( v3 > 3 )
return 1LL;
for ( i = v3 + 1; ; ++i )
{
if ( i > 3 )
{
++v3;
goto LABEL_22;
}
v9 = 0.0;
for ( j = 0; j <= 2; ++j )
v9 = *(double *)(a1 + 24LL * i + 8LL * j) * *(double *)(a1 + 24LL * v3 + 8LL * j) + v9;
if ( v9 > a2 )
break;
}
for ( k = 0; k <= 3; ++k )
{
if ( k != v3 && k != i )
{
for ( l = 0; l <= 2; ++l )
*(double *)(a1 + 24LL * k + 8LL * l) = *(double *)(a1 + 24LL * v3 + 8LL * l)
+ *(double *)(a1 + 24LL * k + 8LL * l);
}
}
for ( m = 0; m <= 2; ++m )
*(double *)(a1 + 24LL * v3 + 8LL * m) = -*(double *)(a1 + 24LL * v3 + 8LL * m);
return 0LL;
}