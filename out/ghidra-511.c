#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
undefined8 func0(sockaddr *param_1,socklen_t param_2,char *param_3,socklen_t param_4,char *param_5,socklen_t param_6){int iVar1;undefined8 uVar2;if (param_1 == (sockaddr *)0x0) {uVar2 = 0xffffffff;}else {iVar1 = getnameinfo(param_1,param_2,param_3,param_4,param_5,param_6,1);if (iVar1 == -1) {uVar2 = 0xffffffff;}else {uVar2 = 0;}}return uVar2;}