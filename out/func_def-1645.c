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
static int read_bus(int busfd, unsigned char *buf, int bufsize)
{
 return read(busfd, buf, bufsize);
}