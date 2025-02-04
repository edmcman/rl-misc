





# 1 
#include "defs.h"
char * func0(char *a1)
{
char *i; // [rsp+10h] [rbp-8h]

for ( i = a1; *i; ++i )
{
if ( *i > 96 && *i <= 122 )
*i -= 32;
}
return a1;
}