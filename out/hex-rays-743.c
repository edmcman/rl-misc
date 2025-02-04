







# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+10h] [rbp-8h]
float v3; // [rsp+14h] [rbp-4h]

v2 = *a1 - a1[2];
v3 = a1[1] - a1[3];
*a1 = a1[2] + *a1;
a1[1] = a1[3] + a1[1];
a1[2] = v2;
result = a1 + 3;
a1[3] = v3;
return result;
}