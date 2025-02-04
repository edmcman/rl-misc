#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, double *a3)
{
int i; // [rsp+2Ch] [rbp-24h]
int j; // [rsp+2Ch] [rbp-24h]
double v6[3]; // [rsp+30h] [rbp-20h]
unsigned __int64 v7; // [rsp+48h] [rbp-8h]

v7 = __readfsqword(0x28u);
for ( i = 0; i <= 2; ++i )
v6[i] = a3[2] * (double)*(int *)(12LL * i + a2 + 8)
+ (double)*(int *)(12LL * i + a2) * *a3
+ a3[1] * (double)*(int *)(12LL * i + a2 + 4);
for ( j = 0; j <= 2; ++j )
*(double *)(a1 + 8LL * j) = v6[j];
return __readfsqword(0x28u) ^ v7;
}