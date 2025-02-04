#include <stdio.h>

#include <linux/i2c-dev.h>

#include <fcntl.h>

#include <string.h>

#include <sys/ioctl.h>

#include <unistd.h>

#include <errno.h>

# 1 
int func0(int param_1,uint param_2,void *param_3,int param_4){int iVar1;ssize_t sVar2;iVar1 = ioctl(param_1,0x703,(ulong)param_2);if (iVar1 < 0) {param_4 = -1;}else {sVar2 = write(param_1,param_3,(long)param_4);if (sVar2 != param_4) {param_4 = -2;}}return param_4;}