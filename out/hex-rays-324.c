#include <stdio.h>

#include <stdarg.h>

# 1 
#include "defs.h"
char * func0(int a1, char *a2, int a3)
{
char *v3; // rdx
char *v4; // rax
int v7; // [rsp+14h] [rbp-4Ch]
char *v8; // [rsp+18h] [rbp-48h]
char *v9; // [rsp+20h] [rbp-40h]
char v10; // [rsp+30h] [rbp-30h] BYREF
unsigned __int64 v11; // [rsp+58h] [rbp-8h]

v11 = __readfsqword(0x28u);
v8 = a2;
v9 = &v10;
v10 = 0;
while ( a1 > 0 )
{
v7 = a1 % a3;
a1 /= a3;
*++v9 = a0123456789abcd[v7];
}
do
{
v3 = v9--;
v4 = v8++;
*v4 = *v3;
}
while ( *v4 );
return a2;
}