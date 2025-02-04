#include <sys/types.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <unistd.h>

#include <netdb.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(int a1, void *a2, int *a3)
{
__int64 result; // rax

*a3 = recv(a1, a2, *a3, 0);
if ( *a3 > 0 )
result = 0LL;
else
result = 0xFFFFFFFFLL;
return result;
}