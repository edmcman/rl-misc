#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int a1, int a2, _BYTE *a3)
{
unsigned __int64 result; // rax
char v4; // cl
int v5; // eax
int v6; // [rsp+Ch] [rbp-14h]
int v7; // [rsp+14h] [rbp-Ch]
int v8; // [rsp+18h] [rbp-8h]
int i; // [rsp+18h] [rbp-8h]
unsigned int v10; // [rsp+1Ch] [rbp-4h]

v6 = a1;
if ( a1 )
{
v8 = 0;
while ( v6 )
{
v7 = v6 % a2;
if ( v6 % a2 < 0 )
v7 -= a2;
v6 = (v6 - v7) / a2;
if ( v7 > 9 )
v4 = v7 + 55;
else
v4 = v7 + 48;
v5 = v8++;
a3[v5] = v4;
}
a3[v8] = 0;
v10 = 0;
for ( i = v8 - 1; ; --i )
{
result = v10;
if ( (int)v10 >= i )
break;
a3[i] ^= a3[v10];
a3[v10] ^= a3[i];
a3[i] ^= a3[v10++];
}
}
else
{
*a3 = 48;
result = (unsigned __int64)(a3 + 1);
a3[1] = 0;
}
return result;
}