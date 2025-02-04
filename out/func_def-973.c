#include <sys/param.h>

#include <sys/time.h>

#include <sys/socket.h>

#include <sys/queue.h>

#include <netinet/in.h>

#include <netinet/in_systm.h>

#include <netinet/if_ether.h>

#include <netinet/ip.h>

#include <netinet/ip6.h>

#include <netinet/udp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <time.h>

#include <poll.h>

#include <errno.h>

#include <err.h>

# 1 
static void *
sockaddr2addr(const struct sockaddr *sa, int *plen)
{
 void *p = NULL;
 int len = 0;

 if (sa->sa_family == AF_INET) {
  p = &((struct sockaddr_in *)sa)->sin_addr;
  len = 4;
 } else if (sa->sa_family == AF_INET6) {
  p = &((struct sockaddr_in6 *)sa)->sin6_addr;
  len = 16;
 }
 if (plen != NULL)
  *plen = len;
 return (p);
}