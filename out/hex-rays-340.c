
# 1 
#include "defs.h"
_WORD * func0(char *a1, _WORD *a2, int a3)
{
char *v4; // rax
char v5; // cl
_WORD *v6; // rax
int v7; // eax
int v8; // [rsp+0h] [rbp-24h]
_WORD *v9; // [rsp+4h] [rbp-20h]
char *v10; // [rsp+Ch] [rbp-18h]

v10 = a1;
v9 = a2;
v8 = a3;
if ( !a1 || !a2 || !a3 )
return 0LL;
while ( 1 )
{
v7 = v8--;
if ( !v7 || !*v10 )
break;
v4 = v10++;
v5 = *v4;
v6 = v9++;
*v6 = v5;
}
if ( v8 )
*v9 = 0;
return a2;
}