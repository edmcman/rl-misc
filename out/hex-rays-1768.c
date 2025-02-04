#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
int j; // [rsp+24h] [rbp-14h]
int i; // [rsp+28h] [rbp-10h]
int k; // [rsp+2Ch] [rbp-Ch]
double v7; // [rsp+30h] [rbp-8h]

for ( i = 0; i <= 3; ++i )
{
for ( j = 0; j <= 3; ++j )
{
v7 = 0.0;
for ( k = 0; k <= 3; ++k )
v7 = *(double *)(8LL * (4 * i + k) + a1) * *(double *)(8LL * (4 * k + j) + a2) + v7;
*(double *)(8LL * (4 * i + j) + a3) = v7;
}
}
return 0LL;
}