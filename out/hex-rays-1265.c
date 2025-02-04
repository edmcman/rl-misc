#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
char * func0(int a1, char *a2)
{
char *result; // rax
char v3; // cl
char *v4; // [rsp+0h] [rbp-20h]
int v5; // [rsp+1Ch] [rbp-4h]

v4 = a2;
result = a2 + 5;
a2[5] = 0;
v5 = 32;
while ( 1 )
{
v5 >>= 1;
if ( !v5 )
break;
if ( (a1 & v5) != 0 )
v3 = 49;
else
v3 = 48;
result = v4++;
*result = v3;
}
return result;
}