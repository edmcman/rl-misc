#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

# 1 
int connectToServer(int *pSockConnection, int serverPort) {
  struct sockaddr_in sAddr;

  if((*pSockConnection=socket(AF_INET,SOCK_DGRAM, IPPROTO_UDP))==-1)
  {
    return -1;
  }
  sAddr.sin_family=AF_INET;
  sAddr.sin_port=htons(serverPort);
  if(connect(*pSockConnection,(struct sockaddr*)&sAddr,sizeof(sAddr))==-1)
  {
     close(*pSockConnection);
     return -1;
  }
  return 0;
}