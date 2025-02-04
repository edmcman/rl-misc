






# 1 
#include "defs.h"
double * func0(double *a1)
{
double *result; // rax
double v2; // [rsp+8h] [rbp-40h]
double v3; // [rsp+10h] [rbp-38h]
double v4; // [rsp+18h] [rbp-30h]
double v5; // [rsp+20h] [rbp-28h]
double v6; // [rsp+28h] [rbp-20h]
double v7; // [rsp+30h] [rbp-18h]
double v8; // [rsp+38h] [rbp-10h]
double v9; // [rsp+40h] [rbp-8h]

v2 = a1[4] + *a1;
v3 = a1[5] + a1[1];
v4 = *a1 - a1[4];
v5 = a1[1] - a1[5];
v6 = a1[6] + a1[2];
v7 = a1[7] + a1[3];
v8 = a1[2] - a1[6];
v9 = a1[3] - a1[7];
*a1 = v2 + v6;
a1[1] = v3 + v7;
a1[2] = v4 + v9;
a1[3] = v5 - v8;
a1[4] = v2 - v6;
a1[5] = v3 - v7;
a1[6] = v4 - v9;
result = a1 + 7;
a1[7] = v5 + v8;
return result;
}