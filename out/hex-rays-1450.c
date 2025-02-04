#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3, float a4)
{
float *result; // rax
float v5; // [rsp+18h] [rbp-Ch]
float v6; // [rsp+1Ch] [rbp-8h]
float v7; // [rsp+20h] [rbp-4h]

v5 = a1[13] + (float)((float)((float)(a1[1] * a2) + (float)(a1[5] * a3)) + (float)(a1[9] * a4));
v6 = a1[14] + (float)((float)((float)(a1[2] * a2) + (float)(a1[6] * a3)) + (float)(a1[10] * a4));
v7 = a1[15] + (float)((float)((float)(a1[3] * a2) + (float)(a1[7] * a3)) + (float)(a1[11] * a4));
a1[12] = a1[12] + (float)((float)((float)(*a1 * a2) + (float)(a1[4] * a3)) + (float)(a1[8] * a4));
a1[13] = v5;
a1[14] = v6;
result = a1 + 15;
a1[15] = v7;
return result;
}