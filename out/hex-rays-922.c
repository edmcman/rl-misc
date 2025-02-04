#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stdarg.h>

#include <ctype.h>

#include <netdb.h>

#include <unistd.h>

#include <sys/time.h>

#include <time.h>

#include <netinet/in.h>

#include <sys/socket.h>

#include <sys/wait.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *result; // rax

*a2 = nbuf_4925[a1 % 13];
a2[1] = sbuf_4926[a1 / 13];
result = a2 + 2;
a2[2] = 0;
return result;
}