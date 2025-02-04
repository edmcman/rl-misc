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
void pack_int(unsigned char bytes[4], unsigned long n)
{
  bytes[0] = n & 0xFF;
  bytes[1] = (n >> 8) & 0xFF;
  bytes[2] = (n >> 16) & 0xFF;
  bytes[3] = (n >> 24) & 0xFF;
}