#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <math.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, _QWORD *a6, int a7)
{
if ( *a6 <= (unsigned __int64)a7 )
return 0LL;
if ( *a6 <= (unsigned __int64)(a7 + 1) )
return (unsigned int)(*a4 - *(_DWORD *)(4LL * a7 + a5));
return (unsigned int)(*(_DWORD *)(4 * (a7 + 1LL) + a5) - *(_DWORD *)(4LL * a7 + a5));
}