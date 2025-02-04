#include <errno.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <linux/i2c-dev.h>

#include <sys/ioctl.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <getopt.h>

# 1 
#include "defs.h"
ssize_t  func0(int a1, void *a2, int a3)
{
return read(a1, a2, a3);
}