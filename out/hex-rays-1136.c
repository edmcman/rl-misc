
# 1 
#include "defs.h"
char * func0(char *a1, char a2, char a3)
{
char *result; // rax

if ( a3 > *a1 )
{
result = (char *)(unsigned __int8)*a1;
if ( a2 >= (char)result )
{
result = a1;
*a1 = a2;
}
}
else
{
result = a1;
*a1 = a3;
}
return result;
}