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
#include "defs.h"
_DWORD * func0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
_DWORD *result; // rax

a7[5] = a1 - 1900;
a7[4] = a2;
a7[3] = a3;
a7[2] = a4;
a7[1] = a5;
result = a7;
*a7 = a6;
return result;
}