#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(char a1, __int64 a2, __int64 a3, float a4, float a5, float a6)
{
float v7; // [rsp+28h] [rbp-28h]
float v8; // [rsp+2Ch] [rbp-24h]
int i; // [rsp+30h] [rbp-20h]
unsigned int v10; // [rsp+34h] [rbp-1Ch]
unsigned int v11; // [rsp+34h] [rbp-1Ch]
int v12; // [rsp+38h] [rbp-18h]
int v13; // [rsp+3Ch] [rbp-14h]
float v14; // [rsp+48h] [rbp-8h]
float v15; // [rsp+4Ch] [rbp-4h]

v10 = 0;
if ( a1 <= 47 || a1 > 57 )
return 0LL;
v12 = lt_3019[a1 - 47];
v13 = lt_3019[a1 - 46] - 1;
for ( i = v12; i <= v13; ++i )
{
v14 = (float)(lb_3018[i] / 10) * a6;
v15 = (float)(lb_3018[i] % 10) * a6;
if ( i != v12 )
{
*(float *)(4LL * (int)v10 + a2) = v7;
*(float *)(4LL * (int)v10 + a3) = v8;
v11 = v10 + 1;
*(float *)(4LL * (int)v11 + a2) = a4 - v14;
*(float *)(4LL * (int)v11 + a3) = a5 - v15;
v10 = v11 + 1;
}
v7 = a4 - v14;
v8 = a5 - v15;
}
return v10;
}