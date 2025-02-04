#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <string.h>

# 1 
char * func0(char *param_1,char param_2,char param_3){char *pcVar1;char *local_10;local_10 = param_1;while( true ) {pcVar1 = strchr(local_10,(int)param_2);if (pcVar1 == (char *)0x0) break;local_10 = pcVar1 + 1;*pcVar1 = param_3;}return param_1;}