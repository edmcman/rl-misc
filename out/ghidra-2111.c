#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

# 1 
undefined8 func0(int *param_1,uint16_t param_2){int iVar1;undefined8 uVar2;long in_FS_OFFSET;sockaddr local_28;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);iVar1 = socket(2,2,0x11);*param_1 = iVar1;if (*param_1 == -1) {uVar2 = 0xffffffff;}else {local_28.sa_family = 2;local_28.sa_data._0_2_ = htons(param_2);iVar1 = connect(*param_1,&local_28,0x10);if (iVar1 == -1) {close(*param_1);uVar2 = 0xffffffff;}else {uVar2 = 0;}}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return uVar2;}