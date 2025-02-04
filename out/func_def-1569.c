#include <signal.h>

#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <assert.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <fcntl.h>              /* Obtain O_* constant definitions */

# 1 
static void xclose( int *fd )
{
    if( *fd < 0 ) return;
    close(*fd);
    *fd = -1;
}