#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <stdlib.h>

#include <unistd.h>

#include <time.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

#include <ctype.h>

# 1 
int
lw_sock_close (int *sock)
{
  int result = 0;
  int sock_to_close;





  sock_to_close = *sock;
  (*sock) = -1;

  if (shutdown (sock_to_close, 2) != 0)
    {



    }

  if (close (sock_to_close) != 0)
    {



    }
  else
    {
      result = 1;
    }

  return result;
}