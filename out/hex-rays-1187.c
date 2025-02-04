
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2, int a3)
{
_BYTE *result; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v6; // rax
char *v7; // rax
char *v8; // rax
char v10; // [rsp+1Bh] [rbp-15h]
int v11; // [rsp+1Ch] [rbp-14h]
_BYTE *v12; // [rsp+20h] [rbp-10h]
char *v13; // [rsp+20h] [rbp-10h]
char *v14; // [rsp+28h] [rbp-8h]

if ( a3 > 1 && a3 <= 36 )
{
v12 = a1;
v14 = a1;
do
{
v11 = a2;
a2 /= a3;
v4 = v12++;
*v4 = aZyxwvutsrqponm[v11 - a3 * a2 + 35];
}
while ( a2 );
if ( v11 < 0 )
{
v5 = v12++;
*v5 = 45;
}
v6 = v12;
v13 = v12 - 1;
*v6 = 0;
while ( v14 < v13 )
{
v10 = *v13;
v7 = v13--;
*v7 = *v14;
v8 = v14++;
*v8 = v10;
}
result = a1;
}
else
{
*a1 = 0;
result = a1;
}
return result;
}