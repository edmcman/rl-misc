#include <string.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <netdb.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <unistd.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, unsigned int a2)
{
unsigned int v2; // ebx
int v3; // er12
_BYTE *v4; // rax
_BYTE *v6; // [rsp+4h] [rbp-18h]

v6 = a1;
v2 = a2;
v3 = 0;
if ( a2 > 0x63 )
{
v6 = a1 + 1;
*a1 = a2 / 0x64 + 48;
v2 = a2 % 0x64;
v3 = 1;
}
if ( a2 > 9 )
{
v4 = v6++;
*v4 = v2 / 0xA + 48;
v2 %= 0xAu;
++v3;
}
*v6 = v2 + 48;
return (unsigned int)(v3 + 1);
}