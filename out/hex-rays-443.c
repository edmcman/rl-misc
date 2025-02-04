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
__int64  func0(int a1, int a2, int *a3)
{
unsigned int v5; // [rsp+1Ch] [rbp-4h]

v5 = listen(a1, a2);
*a3 = *_errno_location();
return v5;
}