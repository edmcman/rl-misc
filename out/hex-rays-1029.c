
# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+10h] [rbp-90h]
double v4; // [rsp+18h] [rbp-88h]
double v5; // [rsp+20h] [rbp-80h]
double v6; // [rsp+28h] [rbp-78h]
double v7; // [rsp+40h] [rbp-60h]
double v8; // [rsp+48h] [rbp-58h]
double v9; // [rsp+50h] [rbp-50h]
double v10; // [rsp+60h] [rbp-40h]
double v11; // [rsp+68h] [rbp-38h]
double v12; // [rsp+80h] [rbp-20h]
double v13; // [rsp+90h] [rbp-10h]

v3 = *a1;
v4 = a1[1];
v5 = a1[2];
v6 = a1[3];
v7 = (v3 + v3) * v3 - 1.0;
v8 = (v3 + v3) * v5;
v9 = (v3 + v3) * v6;
v10 = (v4 + v4) * v5;
v11 = (v4 + v4) * v6;
v12 = (v3 + v3) * v4;
v13 = (v5 + v5) * v6;
*a2 = (*a1 + *a1) * *a1 - 1.0 + (v4 + v4) * v4;
a2[1] = v10 - v9;
a2[2] = v11 + v8;
a2[3] = v10 + v9;
a2[4] = v7 + (v5 + v5) * v5;
a2[5] = v13 - v12;
a2[6] = v11 - v8;
a2[7] = v13 + v12;
result = a2 + 6;
a2[8] = v7 + (v6 + v6) * v6;
return result;
}