#include <stdio.h>

# 1 
#include "defs.h"
char *func0(char *dest, const char *src)
{
const char *v2; // rdx
char *v3; // rax
char *result; // rax

do
{
v2 = src++;
v3 = dest++;
*v3 = *v2;
result = (char *)(unsigned __int8)*v3;
}
while ( (_BYTE)result );
return result;
}