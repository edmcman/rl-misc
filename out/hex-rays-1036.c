
# 1 
#include "defs.h"
char * func0(char *a1)
{
char *v1; // rax
char *v2; // rax
char *v3; // rax
char v5; // [rsp+17h] [rbp-11h]
char *v6; // [rsp+18h] [rbp-10h]
char *v7; // [rsp+20h] [rbp-8h]
char *i; // [rsp+20h] [rbp-8h]

v6 = a1;
v7 = a1;
do
v1 = v7++;
while ( *v1 );
for ( i = v7 - 2; v6 < i; --i )
{
v5 = *v6;
v2 = v6++;
*v2 = *i;
v3 = i;
*v3 = v5;
}
return a1;
}