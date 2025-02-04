#include <stddef.h>

# 1 
#include "defs.h"
char * func0(__int64 a1, __int64 a2, char *a3)
{
char v3; // dl
char *result; // rax

if ( a2 - a1 == 8 )
v3 = 116;
else
v3 = 102;
result = a3;
*a3 = v3;
return result;
}