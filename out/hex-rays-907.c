#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <stdlib.h>

#include <unistd.h>

#include <time.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

#include <ctype.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, uint16_t a2)
{
int optval; // [rsp+18h] [rbp-28h] BYREF
unsigned int v4; // [rsp+1Ch] [rbp-24h]
struct sockaddr addr; // [rsp+20h] [rbp-20h] BYREF
unsigned __int64 v6; // [rsp+38h] [rbp-8h]

v6 = __readfsqword(0x28u);
v4 = 0;
optval = 1;
*a1 = socket(2, 1, 0);
if ( *a1 >= 0 )
{
setsockopt(*a1, 1, 2, &optval, 4u);
addr.sa_family = 2;
*(_DWORD *)&addr.sa_data[2] = 0;
*(_WORD *)addr.sa_data = htons(a2);
if ( bind(*a1, &addr, 0x10u) >= 0 && listen(*a1, 10) >= 0 )
v4 = 1;
}
return v4;
}