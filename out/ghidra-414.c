#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <signal.h>

#include <limits.h>

# 1 
size_t func0(int param_1,void *param_2,size_t param_3){ssize_t sVar1;void *local_20;size_t local_18;local_20 = param_2;local_18 = param_3;while( true ) {if ((long)local_18 < 1) {return param_3;}sVar1 = read(param_1,local_20,local_18);if (sVar1 < 1) break;local_18 = local_18 - sVar1;local_20 = (void *)((long)local_20 + sVar1);}return 0xffffffff;}