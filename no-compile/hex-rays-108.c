
# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, _BYTE *a2, int a3)
{
_BYTE *result; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v6; // rax
char *v7; // rax
char *v8; // rax
char v10; // [rsp+1Bh] [rbp-19h]
_BYTE *v11; // [rsp+1Ch] [rbp-18h]
char *v12; // [rsp+1Ch] [rbp-18h]
char *v13; // [rsp+24h] [rbp-10h]
__int64 v14; // [rsp+2Ch] [rbp-8h]

if ( a3 > 1 && a3 <= 36 )
{
v11 = a2;
v13 = a2;
do
{
v14 = a1;
a1 /= a3;
v4 = v11++;
*v4 = aZyxwvutsrqponm[v14 - a1 * a3 + 35];
}
while ( a1 );
if ( v14 < 0 )
{
v5 = v11++;
*v5 = 45;
}
v6 = v11;
v12 = v11 - 1;
*v6 = 0;
while ( v13 < v12 )
{
v10 = *v12;
v7 = v12--;
*v7 = *v13;
v8 = v13++;
*v8 = v10;
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