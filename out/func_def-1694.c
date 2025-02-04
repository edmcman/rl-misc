#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/time.h>

#include <netdb.h>

#include <string.h>

#include <sys/ioctl.h>

#include <net/if.h>

#include <sys/utsname.h>

#include <netinet/in.h>

#include <unistd.h>

#include <errno.h>

#include <semaphore.h>

#include <malloc.h>

#include <time.h>

# 1 
void ILibdecodeblock( unsigned char in[4], unsigned char out[3] )
{
 out[ 0 ] = (unsigned char ) (in[0] << 2 | in[1] >> 4);
 out[ 1 ] = (unsigned char ) (in[1] << 4 | in[2] >> 2);
 out[ 2 ] = (unsigned char ) (((in[2] << 6) & 0xc0) | in[3]);
}