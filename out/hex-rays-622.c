
# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3, double *a4, double a5, double a6)
{
double *result; // rax
double v7; // [rsp+30h] [rbp-60h]
double v8; // [rsp+38h] [rbp-58h]
double v9; // [rsp+40h] [rbp-50h]
double v10; // [rsp+58h] [rbp-38h]
double v11; // [rsp+60h] [rbp-30h]
double v12; // [rsp+68h] [rbp-28h]
double v13; // [rsp+70h] [rbp-20h]
double v14; // [rsp+80h] [rbp-10h]
double v15; // [rsp+88h] [rbp-8h]

v7 = a3[1] * *a2 + (a2[1] - a3[1]) * *a1 + a1[1] * (*a3 - *a2) - a2[1] * *a3;
v8 = a1[1] * *a3 + (a3[1] - a1[1]) * *a2 + a2[1] * (*a1 - *a3) - a3[1] * *a1;
v9 = a2[1] * *a1 + (a1[1] - a2[1]) * *a3 + a3[1] * (*a2 - *a1) - a1[1] * *a2;
v10 = (a3[1] - a1[1]) / v8;
v11 = (*a1 - *a3) / v8;
v12 = (a1[1] - a2[1]) / v9;
v13 = (*a2 - *a1) / v9;
v14 = (a1[1] * *a3 - a3[1] * *a1) / v8;
v15 = (a2[1] * *a1 - a1[1] * *a2) / v9;
*a4 = (*a3 - *a2) / v7 * a6 + (a2[1] - a3[1]) / v7 * a5 + (a3[1] * *a2 - a2[1] * *a3) / v7;
a4[1] = v11 * a6 + v10 * a5 + v14;
result = a4 + 2;
a4[2] = v13 * a6 + v12 * a5 + v15;
return result;
}