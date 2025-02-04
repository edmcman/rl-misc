#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <fcntl.h>

#include <stdio.h>

# 1 
int func0(int param_1,void *param_2,int param_3){int iVar1;ssize_t sVar2;void *local_28;int local_20;int local_10;local_10 = 0;local_28 = param_2;local_20 = param_3;while( true ) {if (local_20 < 1) {return local_10;}sVar2 = read(param_1,local_28,(long)local_20);iVar1 = (int)sVar2;if (iVar1 < 1) break;local_10 = local_10 + iVar1;local_28 = (void *)((long)local_28 + (long)iVar1);local_20 = local_20 - iVar1;}return local_10;}