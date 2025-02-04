#include <stdio.h>

#include <stdlib.h>

#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <sys/param.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <sys/un.h>

#include <unistd.h>

# 1 
int unpack_int(unsigned char bytes[4])
{
  int output = 0;
  output += bytes[0];
  output += bytes[1] << 8;
  output += bytes[2] << 16;
  output += bytes[3] << 24;
  return output;
}