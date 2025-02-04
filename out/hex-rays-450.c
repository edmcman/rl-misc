#include <sys/types.h>

#include <sys/socket.h>

#include <sys/wait.h>

#include <unistd.h>

#include <pthread.h>

#include <stdlib.h>

#include <netdb.h>  /* rresvport */

#include <assert.h>

#include <string.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, int a2)
{
if ( a2 > 0xFFFF )
return 0xFFFFFFFFLL;
*a1 |= a2 << 16;
return 0LL;
}