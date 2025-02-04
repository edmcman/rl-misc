#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <err.h>

#include <fcntl.h>

#include <limits.h>

#include <stdio.h>

#include <string.h>

#include <unistd.h>

# 1 
void func0(undefined8 param_1,int *param_2){int iVar1;iVar1 = open("/dev/null",0);if (iVar1 < 0) {err(0xffffffff,"%s: open(/dev/null)",param_1);}*param_2 = iVar1;return;}