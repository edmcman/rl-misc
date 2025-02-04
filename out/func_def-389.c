#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <time.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netdb.h>

#include <errno.h>

# 1 
static int GetHostAddress(char *hostname, unsigned int *number)
{

    struct hostent *hp;

    if ((hp = gethostbyname(hostname))) {

        *number = ((struct in_addr *)(hp->h_addr))->s_addr;
        return 0;
    }

    *number = -1;
    return -1;
}