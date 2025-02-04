#include <stdio.h>

# 1 
#include "defs.h"
char * func0(char *a1)
{
char *v1; // rax
char *v2; // rax
char *result; // rax
char *v4; // [rsp+0h] [rbp-18h]
char v5; // [rsp+Fh] [rbp-9h]
char *i; // [rsp+10h] [rbp-8h]
char *v7; // [rsp+10h] [rbp-8h]

v4 = a1;
for ( i = a1; *i; ++i )
;
v7 = i - 1;
while ( 1 )
{
result = v4;
if ( v4 >= v7 )
break;
v5 = *v7;
v1 = v7--;
*v1 = *v4;
v2 = v4++;
*v2 = v5;
}
return result;
}