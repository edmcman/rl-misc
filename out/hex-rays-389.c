#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <time.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netdb.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(const char *a1, _DWORD *a2)
{
__int64 result; // rax
struct hostent *v3; // [rsp+18h] [rbp-8h]

v3 = gethostbyname(a1);
if ( v3 )
{
*a2 = **(_DWORD **)v3->h_addr_list;
result = 0LL;
}
else
{
*a2 = -1;
result = 0xFFFFFFFFLL;
}
return result;
}