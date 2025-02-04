#include <assert.h>

#include <stdio.h>

#include <string.h>

#include <sys/types.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <unistd.h>

#include <sys/socket.h>

# 1 
int
MyHostName(char *nameOut, int maxNameLength)
{
    int k = gethostname(nameOut, maxNameLength);
    return k==0;
}