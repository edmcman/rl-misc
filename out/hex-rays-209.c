#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/time.h>

#include <errno.h>

#include <assert.h>

#include <strings.h>

#include <netinet/tcp.h>

#include <inttypes.h>

#include <poll.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

*a1 = 1;
*a2 = 2;
result = a3;
*a3 = 0;
return result;
}