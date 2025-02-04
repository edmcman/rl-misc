#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
float *result; // rax
float v9; // [rsp+3Ch] [rbp-14h]
float v10; // [rsp+48h] [rbp-8h]
float v11; // [rsp+4Ch] [rbp-4h]

v9 = 1.0 / (float)((float)(*a1 * (float)-*a6) + (float)(*a4 * *a3));
v10 = -*a4;
v11 = *a1;
*a7 = (float)((float)((float)-*a5 * *a3) + (float)((float)-*a2 * (float)-*a6)) * v9;
result = a8;
*a8 = (float)((float)((float)-*a5 * v11) + (float)((float)-*a2 * v10)) * v9;
return result;
}