#include <ctype.h>

#include <errno.h>

#include <malloc.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/syscall.h>

#include <unistd.h>

#include <signal.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2, int a3)
{
char v3; // cl
_BYTE *v4; // rax
_BYTE *result; // rax
_BYTE *v6; // [rsp+8h] [rbp-38h]
char v7; // [rsp+17h] [rbp-29h]
int v8; // [rsp+18h] [rbp-28h]
int v9; // [rsp+1Ch] [rbp-24h]
_BYTE *v10; // [rsp+20h] [rbp-20h]
_BYTE *v11; // [rsp+28h] [rbp-18h]
_BYTE *i; // [rsp+30h] [rbp-10h]
unsigned __int64 v13; // [rsp+38h] [rbp-8h]

v6 = a1;
v10 = a1;
v13 = a3;
v8 = 10;
if ( a2 == 100 && a3 < 0 )
{
v10 = a1 + 1;
*a1 = 45;
v6 = a1 + 1;
v13 = -a3;
}
else if ( a2 == 120 )
{
v8 = 16;
}
else if ( a2 == 111 )
{
v8 = 8;
}
do
{
v9 = v13 % v8;
if ( v9 > 9 )
v3 = v9 + 87;
else
v3 = v9 + 48;
v4 = v10++;
*v4 = v3;
v13 /= (unsigned __int64)v8;
}
while ( v13 );
*v10 = 0;
v11 = v6;
for ( i = v10 - 1; ; --i )
{
result = v11;
if ( v11 >= i )
break;
v7 = *v11;
*v11 = *i;
*i = v7;
++v11;
}
return result;
}