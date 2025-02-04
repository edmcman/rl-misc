#include <sys/types.h>

#include <sys/socket.h>

#include <sys/wait.h>

#include <unistd.h>

#include <pthread.h>

#include <stdlib.h>

#include <netdb.h>  /* rresvport */

#include <assert.h>

#include <string.h>

#include <errno.h>

# 1 
static int privsep_set_family (int *lport, int family)
{
 if (family > 0xffff)
  return (-1);
 *lport |= (family<<16);
 return (0);
}