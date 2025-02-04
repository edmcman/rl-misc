#include <sys/param.h>

#include <sys/time.h>

#include <sys/socket.h>

#include <sys/queue.h>

#include <netinet/in.h>

#include <netinet/in_systm.h>

#include <netinet/if_ether.h>

#include <netinet/ip.h>

#include <netinet/ip6.h>

#include <netinet/udp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <time.h>

#include <poll.h>

#include <errno.h>

#include <err.h>

# 1 
#include "defs.h"
_WORD * func0(_WORD *a1, int *a2)
{
int v3; // [rsp+14h] [rbp-Ch]
_WORD *v4; // [rsp+18h] [rbp-8h]

v4 = 0LL;
v3 = 0;
if ( *a1 == 2 )
{
v4 = a1 + 2;
v3 = 4;
}
else if ( *a1 == 10 )
{
v4 = a1 + 4;
v3 = 16;
}
if ( a2 )
*a2 = v3;
return v4;
}