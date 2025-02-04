#include <stdio.h>

#include <linux/i2c-dev.h>

#include <fcntl.h>

#include <string.h>

#include <sys/ioctl.h>

#include <unistd.h>

#include <errno.h>

# 1 
int writeBytes (int busHandle, int addr, unsigned char* buf, int len)
{
 if (ioctl (busHandle, I2C_SLAVE, addr) < 0)
  return -1;

 if (write (busHandle, buf, len) != len)
  return -2;

 return len;
}