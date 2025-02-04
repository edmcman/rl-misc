#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <fcntl.h>

#include <errno.h>

#include <string.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

#include <sys/un.h>

#include <sys/types.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <sys/sendfile.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int *a2)
{
unsigned int v3; // [rsp+1Ch] [rbp-4h]

v3 = close(a1);
*a2 = *_errno_location();
return v3;
}