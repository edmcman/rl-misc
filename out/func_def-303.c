#include <stdlib.h>

#include <arpa/inet.h>

#include <fcntl.h>

#include <termios.h>

#include <signal.h>

#include <memory.h>

#include <memory.h>

#include <errno.h>

#include <netdb.h>

#include <netinet/in.h>

#include <stdarg.h>

#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>          

#include <sys/socket.h>

#include <sys/time.h>           

# 1 
int init_send_buffer(unsigned short *index)
{
  *index = 4;
  return(*index);
}