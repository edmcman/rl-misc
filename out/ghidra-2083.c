#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <signal.h>

#include <math.h>

#include <unistd.h>

#include <termios.h>

#include <fcntl.h>

#include <sys/signal.h>

#include <sys/types.h>

#include <sys/time.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

# 1 
undefined8 func0(int param_1,void *param_2,int param_3){int iVar1;ssize_t sVar2;void *local_28;int local_20;local_28 = param_2;local_20 = param_3;while( true ) {if (local_20 < 1) {return 1;}sVar2 = write(param_1,local_28,(long)local_20);iVar1 = (int)sVar2;if (iVar1 < 0) break;local_20 = local_20 - iVar1;local_28 = (void *)((long)local_28 + (long)iVar1);usleep(1000);}return 0;}