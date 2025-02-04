#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/un.h>

#include <sys/time.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <stdarg.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int a1, char *a2, socklen_t a3, _DWORD *a4)
{
__int64 result; // rax
socklen_t len; // [rsp+2Ch] [rbp-A4h] BYREF
struct sockaddr *v8; // [rsp+30h] [rbp-A0h]
struct sockaddr *v9; // [rsp+38h] [rbp-98h]
struct sockaddr addr; // [rsp+40h] [rbp-90h] BYREF
unsigned __int64 v11; // [rsp+C8h] [rbp-8h]

v11 = __readfsqword(0x28u);
len = 128;
if ( getsockname(a1, &addr, &len) == -1 )
{
if ( a4 )
*a4 = 0;
*a2 = 63;
a2[1] = 0;
result = 0xFFFFFFFFLL;
}
else
{
if ( addr.sa_family == 2 )
{
v9 = &addr;
if ( a2 )
inet_ntop(2, &v9->sa_data[2], a2, a3);
if ( a4 )
*a4 = ntohs(*(_WORD *)v9->sa_data);
}
else
{
v8 = &addr;
if ( a2 )
inet_ntop(10, &v8->sa_data[6], a2, a3);
if ( a4 )
*a4 = ntohs(*(_WORD *)v8->sa_data);
}
result = 0LL;
}
return result;
}