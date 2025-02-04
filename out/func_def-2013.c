#include <stdio.h>

#include <stdlib.h>

#include <arpa/inet.h>

# 1 
char *
inet_ntoa_r (struct in_addr in, char *buffer)
{
  unsigned char *bytes = (unsigned char *) &in;
  __snprintf (buffer, sizeof (buffer), "%d.%d.%d.%d",
       bytes[0], bytes[1], bytes[2], bytes[3]);

  return buffer;
}