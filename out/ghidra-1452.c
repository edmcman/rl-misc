#include <sys/syscall.h>

#include <sys/select.h>

#include <signal.h>

# 1 
ulong func0(undefined *param_1,int param_2,int param_3){int iVar1;ulong uVar2;if (param_3 < 0) {*param_1 = 0;uVar2 = 0;}else {lseek(param_3,0,0);uVar2 = read(param_3,param_1,(ulong)(param_2 - 1));iVar1 = (int)uVar2;if (iVar1 < 1) {*param_1 = 0;uVar2 = 0;}else {param_1[iVar1] = 0;if (param_1[(long)iVar1 + -1] == '\n') {param_1[(long)iVar1 + -1] = 0;}uVar2 = uVar2 & 0xffffffff;}}return uVar2;}