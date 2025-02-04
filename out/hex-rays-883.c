#include <arpa/inet.h>

#include <errno.h>

#include <grp.h>

#include <pwd.h>

#include <stdio.h>

#include <stdlib.h>

#include <syslog.h>

#include <sys/poll.h>

#include <sys/signal.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <termios.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
*(_DWORD *)(a1 + 56) = a2;
return 0LL;
}