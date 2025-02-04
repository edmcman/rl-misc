#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, uint16_t a2)
{
struct sockaddr addr; // [rsp+10h] [rbp-20h] BYREF
unsigned __int64 v4; // [rsp+28h] [rbp-8h]

v4 = __readfsqword(0x28u);
*a1 = socket(2, 2, 17);
if ( *a1 == -1 )
return 0xFFFFFFFFLL;
addr.sa_family = 2;
*(_WORD *)addr.sa_data = htons(a2);
if ( connect(*a1, &addr, 0x10u) != -1 )
return 0LL;
close(*a1);
return 0xFFFFFFFFLL;
}