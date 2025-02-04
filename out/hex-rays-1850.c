#include <stdio.h>

# 1 
#include "defs.h"
char *func0(char *dest, const char *src, size_t n)
{
const char *v3; // rdx
char *v4; // rax
char *result; // rax
int v6; // [rsp+0h] [rbp-24h]
int v9; // [rsp+20h] [rbp-4h]

v6 = n;
v9 = 0;
do
{
v3 = src++;
v4 = dest++;
*v4 = *v3;
result = (char *)(unsigned __int8)*v4;
if ( !(_BYTE)result )
break;
result = (char *)(unsigned int)++v9;
}
while ( v9 < v6 );
return result;
}