#include <stdlib.h>		/* snprintf, free */

#include <errno.h>		/* errno */

#include <string.h>		/* strerror, strcoll */

#include <zlib.h>		/* gzerror */

# 1 
#include "defs.h"
char * func0(char *a1, char *a2)
{
char v2; // al
char *v5; // [rsp+8h] [rbp-18h]

v5 = a1;
while ( *a2 )
{
if ( *a2 == 92 )
v2 = 47;
else
v2 = *a2;
*v5++ = v2;
++a2;
}
*v5 = 0;
return a1;
}