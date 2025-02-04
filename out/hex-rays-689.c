
# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+10h] [rbp-10h]
float v3; // [rsp+14h] [rbp-Ch]
float v4; // [rsp+18h] [rbp-8h]
float v5; // [rsp+1Ch] [rbp-4h]

v2 = a1[1] + *a1;
v3 = *a1 - a1[1];
v4 = a1[3] + a1[2];
v5 = a1[2] - a1[3];
*a1 = v2 + v4;
a1[2] = v2 - v4;
a1[1] = v3 + v5;
result = a1 + 3;
a1[3] = v3 - v5;
return result;
}