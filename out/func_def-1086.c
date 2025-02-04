#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <fcntl.h>

#include <errno.h>

#include <string.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

#include <sys/un.h>

#include <sys/types.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <sys/sendfile.h>

# 1 
int
manos_socket_close (int fd, int *err)
{
 int result = close (fd);
 *err = errno;
 return result;
}