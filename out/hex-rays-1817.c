
# 1 
#include "defs.h"
__int64  func0(int a1, char *a2)
{
char *v2; // rax
char *v3; // rax
int v5; // [rsp+Ch] [rbp-34h]
char v6; // [rsp+1Fh] [rbp-21h]
unsigned int v7; // [rsp+20h] [rbp-20h]
unsigned int v8; // [rsp+28h] [rbp-18h]
unsigned int v9; // [rsp+2Ch] [rbp-14h]
char *v10; // [rsp+30h] [rbp-10h]
char *v11; // [rsp+30h] [rbp-10h]
char *v12; // [rsp+38h] [rbp-8h]

v5 = a1;
v10 = a2;
if ( a1 < 0 )
{
v10 = a2 + 1;
*a2 = 45;
v5 = -a1;
}
v7 = v5;
v12 = v10;
do
{
v8 = v7 % 0xA;
v7 /= 0xAu;
v2 = v10++;
*v2 = v8 + 48;
}
while ( v7 );
v9 = (_DWORD)v10 - (_DWORD)a2;
v3 = v10;
v11 = v10 - 1;
*v3 = 0;
do
{
v6 = *v11;
*v11 = *v12;
*v12 = v6;
--v11;
++v12;
}
while ( v12 < v11 );
return v9;
}