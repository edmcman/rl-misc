#include <assert.h>

#include <stdio.h>

#include <string.h>

#include <sys/types.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <unistd.h>

#include <sys/socket.h>

# 1 
#include "defs.h"
_BOOL8  func0(char *a1, int a2)
{
return gethostname(a1, a2) == 0;
}