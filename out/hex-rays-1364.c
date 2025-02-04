#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, double *a3, __int64 a4)
{
__int64 result; // rax
int i; // [rsp+20h] [rbp-20h]
int k; // [rsp+20h] [rbp-20h]
int m; // [rsp+20h] [rbp-20h]
int j; // [rsp+24h] [rbp-1Ch]
int l; // [rsp+24h] [rbp-1Ch]
double v10; // [rsp+28h] [rbp-18h]
double v11; // [rsp+30h] [rbp-10h]
double v12; // [rsp+38h] [rbp-8h]

for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
{
result = j;
*(_QWORD *)(a4 + 24LL * i + 8LL * j) = *(_QWORD *)(24LL * i + a2 + 8LL * j);
}
}
for ( k = 0; k <= 2; ++k )
{
for ( l = 0; l <= 2; ++l )
{
result = l;
*(double *)(a4 + 24LL * k + 8LL * l) = *(double *)(a4 + 24LL * k + 8LL * l) - *(double *)(8LL * l + a1);
}
}
for ( m = 0; m <= 2; ++m )
{
v10 = *(double *)(24LL * m + a4);
v11 = *(double *)(24LL * m + a4 + 8);
v12 = *(double *)(24LL * m + a4 + 16);
*(double *)(24LL * m + a4) = a3[6] * v12 + *a3 * v10 + a3[3] * v11;
*(double *)(24LL * m + a4 + 8) = a3[7] * v12 + a3[1] * v10 + a3[4] * v11;
result = 24LL * m + a4;
*(double *)(result + 16) = a3[8] * v12 + a3[2] * v10 + a3[5] * v11;
}
return result;
}