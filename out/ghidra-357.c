#include <string.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <netdb.h>

#include <stdlib.h>

#include <arpa/inet.h>

#include <unistd.h>

#include <errno.h>

# 1 
char func0(char *param_1,uint param_2){uint uVar1;char cVar2;char *local_20;cVar2 = 99 < param_2;uVar1 = param_2;local_20 = param_1;if ((bool)cVar2) {local_20 = param_1 + 1;*param_1 = (char)(param_2 / 100) + '0';uVar1 = param_2 % 100;}if (9 < param_2) {*local_20 = (char)(uVar1 / 10) + '0';uVar1 = uVar1 % 10;cVar2 = cVar2 + '\x01';local_20 = local_20 + 1;}*local_20 = (char)uVar1 + '0';return cVar2 + '\x01';}