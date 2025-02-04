#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
#include "defs.h"
double * func0(double *a1, _QWORD *a2)
{
double *result; // rax

*a1 = (double)(int)*a2;
a1[1] = (double)(int)a2[1];
a1[2] = (double)(int)a2[2];
a1[3] = (double)(int)a2[3];
a1[4] = (double)(int)a2[4];
a1[5] = (double)(int)a2[5];
a1[6] = (double)(int)a2[6];
a1[7] = (double)(int)a2[7];
result = a1 + 6;
a1[8] = (double)(int)a2[8];
return result;
}