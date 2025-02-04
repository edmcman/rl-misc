
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, int a2, double *a3, int a4, double a5, double a6)
{
int i; // [rsp+34h] [rbp-2Ch]
int j; // [rsp+34h] [rbp-2Ch]
double v9; // [rsp+38h] [rbp-28h]
double v10; // [rsp+40h] [rbp-20h]
double v11; // [rsp+48h] [rbp-18h]
double v12; // [rsp+50h] [rbp-10h]
unsigned __int64 v13; // [rsp+58h] [rbp-8h]

v13 = __readfsqword(0x28u);
v12 = 0.0;
v11 = 0.0;
v10 = 0.0;
if ( a5 == 0.0 && a6 == 0.0 )
{
for ( i = 1; i <= a2; ++i )
{
v10 = *(double *)(8LL * i - 8 + a1) + v10;
if ( !a4 )
{
v11 = (double)(a2 - i) * *(double *)(8LL * i - 8 + a1) + v11;
v12 = (double)(a2 - i - 1) * (*(double *)(8LL * i - 8 + a1) * (double)(a2 - i)) + v12;
}
if ( a4 == 1 )
{
v11 = (double)(i - 1) * *(double *)(8LL * i - 8 + a1) + v11;
v12 = (double)(i - 2) * (*(double *)(8LL * i - 8 + a1) * (double)(i - 1)) + v12;
}
}
}
else
{
for ( j = 1; j <= a2; ++j )
{
v10 = *(double *)(8LL * j - 8 + a1) + v10;
v9 = ((double)j + a5) / ((double)a2 + a6);
if ( !a4 )
{
v11 = (1.0 - v9) * *(double *)(8LL * j - 8 + a1) + v11;
v12 = (1.0 - v9) * (*(double *)(8LL * j - 8 + a1) * (1.0 - v9)) + v12;
}
if ( a4 == 1 )
{
v11 = *(double *)(8LL * j - 8 + a1) * v9 + v11;
v12 = *(double *)(8LL * j - 8 + a1) * v9 * v9 + v12;
}
}
}
*a3 = v10 / (double)a2;
a3[1] = v11 / (double)a2 / (double)(a2 - 1);
a3[2] = v12 / (double)a2 / (double)((a2 - 1) * (a2 - 2));
return __readfsqword(0x28u) ^ v13;
}