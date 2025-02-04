#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
double * func0(double *a1, __int64 a2, int a3)
{
double *result; // rax
int i; // [rsp+20h] [rbp-14h]
int j; // [rsp+20h] [rbp-14h]
double v6; // [rsp+24h] [rbp-10h]
double v7; // [rsp+2Ch] [rbp-8h]

v6 = 0.0;
v7 = 0.0;
for ( i = 0; i < a3; ++i )
v6 = *(double *)(8LL * i + a2) + v6;
for ( j = a3; j < 2 * a3; ++j )
v7 = *(double *)(8LL * j + a2) + v7;
*a1 = v6 / (double)a3;
result = a1 + 1;
a1[1] = v7 / (double)a3;
return result;
}