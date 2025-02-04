#include <sys/socket.h>

#include <netinet/in.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
char v2; // bl
unsigned __int8 v4; // [rsp+17h] [rbp-11h]
_BYTE *v5; // [rsp+18h] [rbp-10h]

v5 = a1;
v2 = 0;
while ( 1 )
{
v4 = *v5 - 48;
if ( v4 > 9u )
break;
v2 += 10 * v2 + v4;
++v5;
}
if ( v5 != a1 )
*a2 = v2;
return (_BYTE *)(v5 - a1);
}