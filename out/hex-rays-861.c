
# 1 
#include "defs.h"
char * func0(char *a1)
{
char *i; // [rsp+0h] [rbp-18h]

for ( i = a1; *i; ++i )
{
if ( *i <= 122 && *i > 96 )
*i -= 32;
}
return a1;
}