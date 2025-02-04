#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
char * func0(char *a1)
{
char *v1; // rax
char *v2; // rax
char *v3; // rax
char *result; // rax
char *v5; // [rsp+0h] [rbp-18h]
char v6; // [rsp+Ch] [rbp-Ch]
char *v7; // [rsp+10h] [rbp-8h]
char *i; // [rsp+10h] [rbp-8h]

v5 = a1;
v7 = a1;
do
v1 = v7++;
while ( *v1 );
for ( i = v7 - 2; ; --i )
{
result = i;
if ( i <= v5 )
break;
v6 = *v5;
v2 = v5++;
*v2 = *i;
v3 = i;
*v3 = v6;
}
return result;
}