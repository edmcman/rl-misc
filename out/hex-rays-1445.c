#include <stdio.h>

#include <stdarg.h>

#include <unistd.h>

#include <sys/socket.h>

#include <sys/types.h>

#include <sys/shm.h>

#include <stdlib.h>

#include <netdb.h>

#include <errno.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
char v2; // [rsp+17h] [rbp-11h]
_BYTE *i; // [rsp+18h] [rbp-10h]
char *j; // [rsp+18h] [rbp-10h]
char *v5; // [rsp+20h] [rbp-8h]

for ( i = a1; *i; ++i )
;
v5 = i - 1;
for ( j = a1; *j && j < v5; ++j )
{
v2 = *j;
*j = *v5;
*v5-- = v2;
}
return a1;
}