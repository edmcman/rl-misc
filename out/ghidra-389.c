#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <time.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netdb.h>

#include <errno.h>

# 1 
undefined8 func0(char *param_1,undefined4 *param_2){hostent *phVar1;undefined8 uVar2;phVar1 = gethostbyname(param_1);if (phVar1 == (hostent *)0x0) {*param_2 = 0xffffffff;uVar2 = 0xffffffff;}else {*param_2 = *(undefined4 *)*phVar1->h_addr_list;uVar2 = 0;}return uVar2;}