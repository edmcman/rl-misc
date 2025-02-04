#include <sys/inotify.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

# 1 
undefined8 func0(char *param_1,int *param_2,int *param_3){int iVar1;undefined8 uVar2;iVar1 = inotify_init();*param_2 = iVar1;if (*param_2 < 0) {uVar2 = 0xffffffff;}else {iVar1 = inotify_add_watch(*param_2,param_1,0x2c02);*param_3 = iVar1;if (*param_3 < 0) {uVar2 = 0xffffffff;}else {uVar2 = 0;}}return uVar2;}