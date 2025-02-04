#include <sys/types.h>

#include <sys/socket.h>

#include <sys/wait.h>

#include <unistd.h>

#include <pthread.h>

#include <stdlib.h>

#include <netdb.h>  /* rresvport */

#include <assert.h>

#include <string.h>

#include <errno.h>

# 1 
undefined8 func0(uint *param_1,int param_2){undefined8 uVar1;if (param_2 < 0x10000) {*param_1 = param_2 << 0x10 | *param_1;uVar1 = 0;}else {uVar1 = 0xffffffff;}return uVar1;}