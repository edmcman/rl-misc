#include <unistd.h>

#include <stdlib.h>

#include <stdarg.h>

#include <stdio.h>

#include <string.h>

#include <syslog.h>

#include <limits.h>

#include <errno.h>

#include <ctype.h>

#include <fcntl.h>

#include <netdb.h>

#include <dirent.h>

#include <time.h>

#include <sys/param.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/wait.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <getopt.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *v6; // [rsp+8h] [rbp-18h]

v6 = a1;
do
{
v2 = a2++;
v3 = v6++;
*v3 = *v2;
}
while ( *v3 );
return a1;
}