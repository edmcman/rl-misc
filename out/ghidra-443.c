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
int func0(int param_1,int param_2,int *param_3){int iVar1;int *piVar2;iVar1 = listen(param_1,param_2);piVar2 = __errno_location();*param_3 = *piVar2;return iVar1;}