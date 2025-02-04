
# 1 
#include "defs.h"
unsigned __int64  func0(double *a1, double *a2, int *a3)
{
double v4; // [rsp+20h] [rbp-30h]
double v5; // [rsp+20h] [rbp-30h]
double v6; // [rsp+28h] [rbp-28h]
double v7; // [rsp+28h] [rbp-28h]
double v8; // [rsp+30h] [rbp-20h]
double v9; // [rsp+30h] [rbp-20h]
double v10; // [rsp+30h] [rbp-20h]
double v11; // [rsp+38h] [rbp-18h]
double v12; // [rsp+38h] [rbp-18h]
unsigned __int64 v13; // [rsp+48h] [rbp-8h]

v13 = __readfsqword(0x28u);
v11 = *a2 - a2[3];
v8 = a2[1] - a2[2];
v6 = a2[1] - v8 / 2.0;
v4 = *a2 - v11 / 2.0;
v9 = (double)*a3 * v8 / 16.0;
v12 = (double)a3[2] * v9 / 16.0 + (double)a3[1] * v11 / 16.0;
v10 = (double)a3[3] * v12 / 16.0 + v9;
v5 = v12 / 2.0 + v4;
*a1 = v5;
v7 = v10 / 2.0 + v6;
a1[1] = v7;
a1[2] = v7 - v10;
a1[3] = v5 - v12;
return __readfsqword(0x28u) ^ v13;
}