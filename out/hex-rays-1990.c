#include <stdio.h>

#include <stdlib.h>

#include <assert.h> //assert

# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2, int a3)
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
v12 = a2;
v14 = a2;
do
{
v11 = a1;
a1 /= a3;
v4 = v12++;
*v4 = aZyxwvutsrqponm[v11 - a3 * a1 + 35];
}
while ( a1 );
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
result = a2;
}
else
{
*a2 = 0;
result = a2;
}
return result;
}