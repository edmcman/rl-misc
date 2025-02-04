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
int Serial_ReadData(int portId, unsigned char *buf, int length)
{
  return read(portId, buf, length);
}