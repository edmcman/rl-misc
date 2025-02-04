
# 1 
#include "defs.h"
float * func0(float *a1)
{
float *result; // rax
float v2; // [rsp+8h] [rbp-30h]
float v3; // [rsp+8h] [rbp-30h]
float v4; // [rsp+Ch] [rbp-2Ch]
float v5; // [rsp+Ch] [rbp-2Ch]
float v6; // [rsp+10h] [rbp-28h]
float v7; // [rsp+10h] [rbp-28h]
float v8; // [rsp+10h] [rbp-28h]
float v9; // [rsp+14h] [rbp-24h]
float v10; // [rsp+14h] [rbp-24h]
float v11; // [rsp+18h] [rbp-20h]
float v12; // [rsp+18h] [rbp-20h]
float v13; // [rsp+1Ch] [rbp-1Ch]
float v14; // [rsp+1Ch] [rbp-1Ch]
float v15; // [rsp+20h] [rbp-18h]
float v16; // [rsp+20h] [rbp-18h]
float v17; // [rsp+24h] [rbp-14h]
float v18; // [rsp+24h] [rbp-14h]
float v19; // [rsp+28h] [rbp-10h]
float v20; // [rsp+28h] [rbp-10h]
float v21; // [rsp+2Ch] [rbp-Ch]
float v22; // [rsp+2Ch] [rbp-Ch]
float v23; // [rsp+30h] [rbp-8h]
float v24; // [rsp+30h] [rbp-8h]
float v25; // [rsp+34h] [rbp-4h]
float v26; // [rsp+34h] [rbp-4h]

v4 = a1[2];
v6 = a1[4];
v9 = a1[6];
v11 = a1[8];
v13 = (float)(0.5 * v9) + *a1;
v2 = *a1 - v9;
v15 = 0.93969262 * (float)(v6 + v4);
v17 = 0.76604444 * (float)(v11 + v4);
v10 = 0.17364818 * (float)(v6 - v11);
v7 = (float)(v11 - v4) + v6;
v5 = v2 - (float)(v7 * 0.5);
a1[4] = v7 + v2;
v12 = (float)(v13 - v17) + v10;
v3 = (float)(v13 - v15) + v17;
v8 = (float)(v13 + v15) - v10;
v19 = a1[1];
v23 = a1[5];
v25 = a1[7];
v21 = 0.86602539 * a1[3];
v14 = 0.98480773 * (float)(v23 + v19);
v16 = 0.34202015 * (float)(v23 - v25);
v18 = 0.64278764 * (float)(v19 + v25);
v20 = 0.86602539 * (float)((float)(v19 - v23) - v25);
v24 = (float)(v14 - v21) - v18;
v26 = (float)(v16 - v21) - v14;
v22 = (float)(v16 + v21) - v18;
*a1 = v8 - v26;
a1[1] = v5 + v20;
a1[2] = v3 - v22;
a1[3] = v12 + v24;
a1[5] = v12 - v24;
a1[6] = v3 + v22;
a1[7] = v5 - v20;
result = a1 + 8;
a1[8] = v8 + v26;
return result;
}