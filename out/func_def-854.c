#include <sys/types.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <unistd.h>

#include <netdb.h>

#include <string.h>

# 1 
int trecv(int targetfd, char* bytes, int *bytes_size)
{
 if((*bytes_size = recv(targetfd, bytes, *bytes_size, 0)) < 1)
 {
  return -1;
 }
 return 0;
}