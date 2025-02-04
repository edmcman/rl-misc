#include <poll.h>

#include <sys/socket.h>

#include <inttypes.h>

#include <endian.h> // for be64toh

#include <unistd.h>

#include <errno.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int a2)
{
_DWORD *result; // rax

close(*(_DWORD *)(8LL * a2 + a1));
result = (_DWORD *)(8LL * a2 + a1);
*result = -1;
return result;
}