#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/time.h>

#include <netdb.h>

#include <string.h>

#include <sys/ioctl.h>

#include <net/if.h>

#include <sys/utsname.h>

#include <netinet/in.h>

#include <unistd.h>

#include <errno.h>

#include <semaphore.h>

#include <malloc.h>

#include <time.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax

*a2 = (4 * *a1) | (a1[1] >> 4);
a2[1] = (a1[2] >> 2) | (16 * a1[1]);
result = a2 + 2;
a2[2] = a1[3] | (a1[2] << 6);
return result;
}