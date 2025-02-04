#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <math.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

# 1 
int func0(void){int *in_RCX;int iVar1;long in_R8;ulong *in_R9;int param_7;if ((ulong)(long)param_7 < *in_R9) {if ((ulong)(long)(param_7 + 1) < *in_R9) {iVar1 = *(int *)(in_R8 + ((long)param_7 + 1) * 4) - *(int *)(in_R8 + (long)param_7 * 4);}else {iVar1 = *in_RCX - *(int *)(in_R8 + (long)param_7 * 4);}}else {iVar1 = 0;}return iVar1;}