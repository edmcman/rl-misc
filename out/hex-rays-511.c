#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(const struct sockaddr *a1, socklen_t a2, char *a3, socklen_t a4, char *a5, socklen_t a6)
{
if ( !a1 )
return 0xFFFFFFFFLL;
if ( getnameinfo(a1, a2, a3, a4, a5, a6, 1) == -1 )
return 0xFFFFFFFFLL;
return 0LL;
}