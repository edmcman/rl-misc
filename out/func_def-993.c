#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <math.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

# 1 
static int streamPropertiesCount(unsigned char **tokens, int *ntokens,
    int *properties, int *nproperties, int *streams, int **nstreams, int stream)
{
    if(*nstreams>stream)
    {
        if(*nstreams>(stream+1))
        {
            return streams[stream+1]-streams[stream];
        }
        else
        {
            return *nproperties-streams[stream];
        }
    }
    return 0;
}