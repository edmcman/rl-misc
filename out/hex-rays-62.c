#include <stdio.h>

#include <stdlib.h>																								// per la malloc

#include <string.h>																								// per manipolare stringhe

#include <fcntl.h>																								// per fcntl

#include <sys/socket.h>

# 1 
#include "defs.h"
__int64  func0(const char *a1, char a2, char a3)
{
char *s; // [rsp+8h] [rbp-8h]

if ( a2 == a3 )
return 0LL;
s = strchr(a1, a2);
if ( !s )
return 0LL;
while ( s )
{
*s = a3;
s = strchr(s, a2);
}
return 1LL;
}