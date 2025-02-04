#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
double * func0(double *a1, __int64 a2, int a3)
{
double *result; // rax
int i; // [rsp+20h] [rbp-14h]
double v5; // [rsp+24h] [rbp-10h]
double v6; // [rsp+2Ch] [rbp-8h]

v5 = 0.0;
v6 = 0.0;
for ( i = 0; i < 2 * a3; i += 2 )
{
v5 = *(double *)(8LL * i + a2) + v5;
v6 = *(double *)(8 * (i + 1LL) + a2) + v6;
}
*a1 = v5 / (double)a3;
result = a1 + 1;
a1[1] = v6 / (double)a3;
return result;
}