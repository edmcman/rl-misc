#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <signal.h>

#include <math.h>

#include <unistd.h>

#include <termios.h>

#include <fcntl.h>

#include <sys/signal.h>

#include <sys/types.h>

#include <sys/time.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

# 1 
#include "defs.h"
__int64  func0(int a1, char *a2, int a3)
{
int v6; // [rsp+1Ch] [rbp-4h]

while ( a3 > 0 )
{
v6 = write(a1, a2, a3);
if ( v6 < 0 )
return 0LL;
a3 -= v6;
a2 += v6;
usleep(0x3E8u);
}
return 1LL;
}