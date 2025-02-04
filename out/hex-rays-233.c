#include <stdio.h>

#include <string.h>

#include <termios.h>

#include <sys/ioctl.h>

#include <unistd.h>

#include <fcntl.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <limits.h>

# 1 
#include "defs.h"
ssize_t  func0(int a1, void *a2, int a3)
{
return read(a1, a2, a3);
}