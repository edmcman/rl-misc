#include <stdio.h>

#include <linux/i2c-dev.h>

#include <fcntl.h>

#include <string.h>

#include <sys/ioctl.h>

#include <unistd.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(int a1, unsigned int a2, const void *a3, unsigned int a4)
{
if ( ioctl(a1, 0x703uLL, a2) < 0 )
return 0xFFFFFFFFLL;
if ( write(a1, a3, (int)a4) == a4 )
return a4;
return 4294967294LL;
}