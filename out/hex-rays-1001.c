#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double a4, double a5, double a6)
{
double *result; // rax
double v7; // [rsp+28h] [rbp-38h]
double v8; // [rsp+28h] [rbp-38h]

v7 = a4;
if ( a5 > 0.0 )
{
if ( a4 >= 1.0 )
v7 = 0.0;
v8 = 6.0 * v7;
result = (double *)(unsigned int)(int)v8;
if ( (unsigned int)(int)v8 <= 5 )
__asm { jmp rax }
}
else
{
*a1 = a6;
*a2 = a6;
result = a3;
*a3 = a6;
}
return result;
}