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
lw_sock_listen (int *sock, int port)
{
  int result = 0;
  struct sockaddr_in name;
  int enable = 1;

  *sock = socket (AF_INET, SOCK_STREAM, 0);
  if (*sock >= 0)
    {
      setsockopt (*sock, SOL_SOCKET, SO_REUSEADDR,
    (char *) &enable, sizeof (int));

      name.sin_family = AF_INET;
      name.sin_addr.s_addr = INADDR_ANY;
      name.sin_port = htons (port);
      if (bind (*sock, (struct sockaddr *) &name, sizeof name) >= 0)
 {
   if (listen ((*sock), 10) >= 0)
     {
       result = 1;
     }
 }
    }

  return result;
}