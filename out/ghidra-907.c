#include <sys/types.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/socket.h>

#include <sys/time.h>

#include <stdlib.h>

#include <unistd.h>

#include <time.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

#include <ctype.h>

# 1 
undefined4 func0(int *param_1,uint16_t param_2){int iVar1;long in_FS_OFFSET;undefined4 local_30;undefined4 local_2c;sockaddr local_28;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_2c = 0;local_30 = 1;iVar1 = socket(2,1,0);*param_1 = iVar1;if (-1 < *param_1) {setsockopt(*param_1,1,2,&local_30,4);local_28.sa_family = 2;local_28.sa_data[2] = '\0';local_28.sa_data[3] = '\0';local_28.sa_data[4] = '\0';local_28.sa_data[5] = '\0';local_28.sa_data._0_2_ = htons(param_2);iVar1 = bind(*param_1,&local_28,0x10);if (-1 < iVar1) {iVar1 = listen(*param_1,10);if (-1 < iVar1) {local_2c = 1;}}}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return local_2c;}