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
__int64  func0(int *a1)
{
unsigned int v2; // [rsp+18h] [rbp-8h]
int fd; // [rsp+1Ch] [rbp-4h]

v2 = 0;
fd = *a1;
*a1 = -1;
shutdown(fd, 2);
if ( !close(fd) )
v2 = 1;
return v2;
}