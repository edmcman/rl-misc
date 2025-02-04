#include <stdio.h>

#include <linux/rtc.h>

#include <sys/ioctl.h>

#include <sys/syscall.h>

#include <sys/time.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <errno.h>

#include <string.h>

#include <getopt.h>

# 1 
void func0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 *param_7){param_7[5] = param_1 + -0x76c;param_7[4] = param_2;param_7[3] = param_3;param_7[2] = param_4;param_7[1] = param_5;*param_7 = param_6;return;}