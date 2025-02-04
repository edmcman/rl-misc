






# 1 
#include "defs.h"
char * func0(char *a1)
{
char v1; // al
char *v3; // [rsp+10h] [rbp-8h]

v3 = a1;
while ( *v3 )
{
if ( *v3 == 32 )
{
++v3;
}
else
{
if ( *v3 <= 96 || *v3 > 122 )
v1 = *v3;
else
v1 = *v3 - 32;
*v3 = v1;
while ( *v3 != 32 && *v3 )
++v3;
}
}
return a1;
}