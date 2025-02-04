#include <stdio.h>

#include <fcntl.h>

#include <time.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/ioctl.h>

#include <sys/select.h>

#include <sys/syslog.h>

#include <sys/resource.h>

#include <termios.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, int a2, int a3)
{
*a1 &= ~a2;
*a1 ^= a3;
return 0LL;
}