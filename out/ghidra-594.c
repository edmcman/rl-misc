#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <sys/un.h>

#include <sys/time.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <stdarg.h>

#include <stdio.h>

# 1 
undefined8 func0(int param_1,char *param_2,socklen_t param_3,uint *param_4){uint16_t uVar1;int iVar2;undefined8 uVar3;long in_FS_OFFSET;socklen_t local_ac;sockaddr *local_a8;sockaddr *local_a0;sockaddr local_98 [8];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_ac = 0x80;iVar2 = getsockname(param_1,local_98,&local_ac);if (iVar2 == -1) {if (param_4 != (uint *)0x0) {*param_4 = 0;}*param_2 = '?';param_2[1] = '\0';uVar3 = 0xffffffff;}else {if (local_98[0].sa_family == 2) {local_a0 = local_98;if (param_2 != (char *)0x0) {inet_ntop(2,local_98[0].sa_data + 2,param_2,param_3);}if (param_4 != (uint *)0x0) {uVar1 = ntohs(*(uint16_t *)local_a0->sa_data);*param_4 = (uint)uVar1;}}else {local_a8 = local_98;if (param_2 != (char *)0x0) {inet_ntop(10,local_98[0].sa_data + 6,param_2,param_3);}if (param_4 != (uint *)0x0) {uVar1 = ntohs(*(uint16_t *)local_a8->sa_data);*param_4 = (uint)uVar1;}}uVar3 = 0;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return uVar3;}