#include <sys/types.h>

#include <sys/stat.h>

#include <errno.h>

#include <unistd.h>

#include <libgen.h>

#include <stdlib.h>

# 1 
ulong func0(int param_1,void *param_2,int param_3){int iVar1;ulong uVar2;undefined8 local_28;undefined4 local_20;local_28 = param_2;local_20 = param_3;do {uVar2 = write(param_1,local_28,(long)local_20);iVar1 = (int)uVar2;if (iVar1 < 1) break;local_20 = local_20 - iVar1;local_28 = (void *)((long)local_28 + (long)iVar1);} while (0 < local_20);return uVar2 & 0xffffffff;}