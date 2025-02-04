#include <stdio.h>

#include <fcntl.h>

#include <time.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/ioctl.h>

#include <sys/select.h>

#include <sys/syslog.h>

#include <sys/resource.h>

#include <termios.h>

# 1 
int
scc_setval(int *i, int mask, int val)
{

 *i = (*i & (mask ^ 0xffffffff));


 *i = (*i ^ val);
 return(0);
}