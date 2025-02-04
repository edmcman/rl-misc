#include <assert.h>

#include <stdio.h>

#include <string.h>

#include <sys/types.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <unistd.h>

#include <sys/socket.h>

# 1 
bool func0(char *param_1,int param_2){int iVar1;iVar1 = gethostname(param_1,(long)param_2);return iVar1 == 0;}