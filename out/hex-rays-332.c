#include <stddef.h>

#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, _QWORD *a3)
{
__int64 i; // [rsp+28h] [rbp-28h]
__int64 j; // [rsp+28h] [rbp-28h]
double v6[3]; // [rsp+30h] [rbp-20h]
unsigned __int64 v7; // [rsp+48h] [rbp-8h]

v7 = __readfsqword(0x28u);
for ( i = 0LL; i <= 2; ++i )
v6[i] = (double)(int)a3[2] * *(double *)(24 * i + a2 + 16)
+ *(double *)(24 * i + a2) * (double)(int)*a3
+ (double)(int)a3[1] * *(double *)(24 * i + a2 + 8);
for ( j = 0LL; j <= 2; ++j )
*(double *)(a1 + 8 * j) = v6[j];
return __readfsqword(0x28u) ^ v7;
}