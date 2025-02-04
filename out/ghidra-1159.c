#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <err.h>

#include <time.h>

#include <errno.h>

#include <utime.h>

# 1 
void func0(char *param_1,ulong param_2){char cVar1;ulong local_28;char *local_10;param_1[0xb] = ' ';local_10 = param_1 + 10;*local_10 = ((byte)param_2 & 7) + 0x30;local_28 = param_2;while (local_10 != param_1) {local_28 = local_28 >> 3;if (local_28 == 0) {cVar1 = ' ';}else {cVar1 = ((byte)local_28 & 7) + 0x30;}local_10 = local_10 + -1;*local_10 = cVar1;}return;}