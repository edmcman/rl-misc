#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/time.h>

#include <errno.h>

#include <assert.h>

#include <strings.h>

#include <netinet/tcp.h>

#include <inttypes.h>

#include <poll.h>

# 1 
void bs_version(int *major, int *minor, int *patch)
{
    *major = 1;
    *minor = 2;
    *patch = 0;
}