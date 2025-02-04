#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(int a1, double *a2, int a3, double *a4, __int64 a5)
{
int v5; // eax
int v6; // eax
int v7; // eax
int v9; // [rsp+20h] [rbp-70h]
int v10; // [rsp+24h] [rbp-6Ch]
unsigned int v11; // [rsp+28h] [rbp-68h]
int i; // [rsp+2Ch] [rbp-64h]
double v13; // [rsp+30h] [rbp-60h]
double v14; // [rsp+38h] [rbp-58h]
double v15; // [rsp+40h] [rbp-50h]
double v16; // [rsp+48h] [rbp-48h]
double v17; // [rsp+50h] [rbp-40h]
double v18; // [rsp+58h] [rbp-38h]
double v19; // [rsp+60h] [rbp-30h]
double v20; // [rsp+68h] [rbp-28h]

v18 = *a2;
v19 = *a4;
v10 = 0;
v9 = 0;
v11 = 0;
if ( *a4 <= *a2 != *a4 > -*a2 )
{
v20 = *a2;
v9 = 1;
v18 = a2[1];
}
else
{
v20 = *a4;
v10 = 1;
v19 = a4[1];
}
if ( v9 < a1 && (v10 >= a3 || v19 <= v18 != v19 > -v18) )
{
v16 = v18 + v20;
v14 = v20 - (v18 + v20 - v18);
v18 = a2[++v9];
}
else
{
v16 = v19 + v20;
v14 = v20 - (v19 + v20 - v19);
v19 = a4[++v10];
}
v13 = v16;
for ( i = 2; i < a1 + a3; ++i )
{
if ( v9 < a1 && (v10 >= a3 || v19 <= v18 != v19 > -v18) )
{
v17 = v18 + v14;
v15 = v14 - (v18 + v14 - v18);
v18 = a2[++v9];
}
else
{
v17 = v19 + v14;
v15 = v14 - (v19 + v14 - v19);
v19 = a4[++v10];
}
v14 = v13 - (v13 + v17 - (v13 + v17 - v13)) + v17 - (v13 + v17 - v13);
v13 = v13 + v17;
if ( v15 != 0.0 )
{
v5 = v11++;
*(double *)(8LL * v5 + a5) = v15;
}
}
if ( v14 != 0.0 )
{
v6 = v11++;
*(double *)(8LL * v6 + a5) = v14;
}
if ( v13 != 0.0 || !v11 )
{
v7 = v11++;
*(double *)(8LL * v7 + a5) = v13;
}
return v11;
}