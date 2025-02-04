#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double * func0(double *a1, int a2)
{
double *result; // rax
int i; // [rsp+10h] [rbp-Ch]
double v4; // [rsp+14h] [rbp-8h]

v4 = 1.0;
for ( i = 0; i < a2; ++i )
v4 = *a1 * v4;
result = a1;
*a1 = v4;
return result;
}