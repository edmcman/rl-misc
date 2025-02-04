#include <stdarg.h>

#include <ctype.h>

#include <malloc.h>

# 1 
#include "defs.h"
int * func0(_DWORD *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+14h] [rbp-Ch]
int i; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

result = (int *)(unsigned int)*a2;
v3 = *a2;
if ( *a1 && v3 )
{
for ( i = *a1 % v3; i; i = v5 % i )
{
v5 = v3;
v3 = i;
}
*a1 /= v3;
result = a2;
*a2 /= v3;
}
return result;
}