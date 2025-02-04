
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, double a2)
{
int v2; // eax
int v3; // eax
__int64 result; // rax
int v5; // eax
int v6; // eax
int v7; // [rsp+10h] [rbp-20h]
int i; // [rsp+14h] [rbp-1Ch]
int j; // [rsp+14h] [rbp-1Ch]
int v10; // [rsp+18h] [rbp-18h]
int v11; // [rsp+18h] [rbp-18h]
int k; // [rsp+18h] [rbp-18h]
int v13; // [rsp+1Ch] [rbp-14h]
int v14; // [rsp+1Ch] [rbp-14h]
int v15; // [rsp+20h] [rbp-10h]
int v16; // [rsp+20h] [rbp-10h]
int v17; // [rsp+24h] [rbp-Ch]
int v18; // [rsp+24h] [rbp-Ch]

v7 = 0;
v10 = 0;
v15 = 1000000000;
v13 = (int)a2;
if ( a2 < 0.0 )
{
v10 = 1;
*a1 = 45;
if ( v13 < 0 )
v13 = -v13;
}
for ( i = 10; i; --i )
{
v17 = v13 / v15;
v13 %= v15;
if ( v17 || v7 )
{
v2 = v10++;
a1[v2] = v17 + 48;
v7 = 1;
}
v15 /= 10;
}
if ( !v7 )
{
v3 = v10++;
a1[v3] = 48;
}
v16 = 100000000;
v14 = (int)((double)1000000000 * (a2 - (double)(int)a2));
if ( v14 < 0 )
v14 = -v14;
if ( v14 )
{
v5 = v10;
v11 = v10 + 1;
a1[v5] = 46;
for ( j = 9; j; --j )
{
v18 = v14 / v16;
v14 %= v16;
v6 = v11++;
a1[v6] = v18 + 48;
v16 /= 10;
}
a1[v11] = 0;
for ( k = v11 - 1; k > 0; --k )
{
if ( a1[k] != 48 )
{
++k;
break;
}
a1[k] = 0;
}
result = (unsigned int)k;
}
else
{
a1[v10] = 0;
result = (unsigned int)v10;
}
return result;
}