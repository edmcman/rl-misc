#include <stdint.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+14h] [rbp-14h]
float v3; // [rsp+18h] [rbp-10h]
float v4; // [rsp+18h] [rbp-10h]
float v5; // [rsp+1Ch] [rbp-Ch]
float v6; // [rsp+20h] [rbp-8h]

v2 = a1[1];
v3 = a1[2];
v5 = a1[3];
v6 = *a1 + v3;
v4 = *a1 - v3;
*a1 = v6 + (float)(v2 + v5);
a1[1] = v6 - (float)(v2 + v5);
a1[2] = v4;
result = a1 + 3;
a1[3] = v5 - v2;
return result;
}