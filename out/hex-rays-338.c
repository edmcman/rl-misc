
# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
int i; // [rsp+1Ch] [rbp-24h]
float v3; // [rsp+20h] [rbp-20h]
float v4; // [rsp+20h] [rbp-20h]
float v5; // [rsp+20h] [rbp-20h]
float v6; // [rsp+24h] [rbp-1Ch]
float v7; // [rsp+24h] [rbp-1Ch]
float v8; // [rsp+28h] [rbp-18h]
float v9; // [rsp+28h] [rbp-18h]
float v10; // [rsp+2Ch] [rbp-14h]

for ( i = 0; i <= 7; i += 4 )
{
v3 = a1[i];
v10 = a1[i + 1];
v6 = a1[i + 2];
v8 = a1[i + 3];
a1[i] = (float)(v3 + v10) + (float)(v6 + v8);
a1[i + 2] = (float)(v3 + v10) - (float)(v6 + v8);
a1[i + 1] = (float)(v3 - v10) + (float)(v6 - v8);
a1[i + 3] = (float)(v3 - v10) - (float)(v6 - v8);
}
v4 = *a1;
*a1 = a1[4] + *a1;
a1[4] = v4 - a1[4];
v5 = a1[2];
a1[2] = a1[6] + v5;
a1[6] = v5 - a1[6];
v7 = 0.70710677 * (float)(a1[5] + a1[7]);
v9 = 0.70710677 * (float)(a1[5] - a1[7]);
a1[5] = a1[1] - v7;
a1[1] = a1[1] + v7;
a1[7] = a1[3] - v9;
result = a1 + 3;
a1[3] = a1[3] + v9;
return result;
}