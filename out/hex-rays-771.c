#include <ctype.h>

# 1 
#include "defs.h"
char * func0(int a1, char *a2, unsigned int a3)
{
char *v3; // rdx
char *v4; // rax
char *v6; // [rsp+0h] [rbp-60h]
unsigned int v7; // [rsp+1Ch] [rbp-44h]
char *v8; // [rsp+20h] [rbp-40h]
char v9; // [rsp+50h] [rbp-10h] BYREF
unsigned __int64 v10; // [rsp+58h] [rbp-8h]

v6 = a2;
v10 = __readfsqword(0x28u);
v8 = &v9;
v9 = 0;
if ( a1 == 0x80000000 )
{
v7 = a1;
}
else if ( a1 < 0 && a3 == 10 )
{
v7 = -a1;
}
else
{
v7 = a1;
}
do
{
*--v8 = a0123456789abcd[v7 % a3];
v7 /= a3;
}
while ( v7 );
if ( a1 < 0 && a3 == 10 )
*--v8 = 45;
do
{
v3 = v8++;
v4 = v6++;
*v4 = *v3;
}
while ( *v4 );
return a2;
}