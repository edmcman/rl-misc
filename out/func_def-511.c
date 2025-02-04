#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
int
addr_sa_ntop(const struct sockaddr *sa, socklen_t slen, char *h, size_t hlen,
    char *p, size_t plen)
{
 if (sa == NULL)
  return (-1);
 if (getnameinfo(sa, slen, h, hlen, p, plen, NI_NUMERICHOST) == -1)
  return (-1);

 return (0);
}