
# 1 
#include "defs.h"
char * func0(int a1, char *a2, int a3)
{
char *result; // rax
char *v4; // rax
char *v5; // rax
char *v6; // rax
char *v7; // rax
int v8; // [rsp+Ch] [rbp-24h]
char v9; // [rsp+17h] [rbp-19h]
char *v10; // [rsp+18h] [rbp-18h]
char *v11; // [rsp+18h] [rbp-18h]
char *v12; // [rsp+20h] [rbp-10h]

v8 = a1;
if ( a3 > 1 && a3 <= 36 )
{
v10 = a2;
if ( a1 < 0 && a3 == 10 )
{
v10 = a2 + 1;
*a2 = 45;
}
v12 = v10;
do
{
v4 = v10++;
*v4 = aZyxwvutsrqponm[v8 % a3 + 35];
v8 /= a3;
}
while ( v8 );
v5 = v10;
v11 = v10 - 1;
*v5 = 0;
while ( v12 < v11 )
{
v9 = *v12;
v6 = v12++;
*v6 = *v11;
v7 = v11--;
*v7 = v9;
}
result = a2;
}
else
{
*a2 = 0;
result = a2;
}
return result;
}