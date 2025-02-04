#include <stdio.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <strings.h>

#include <errno.h>

#include <termios.h>

# 1 
int func0(int param_1,undefined *param_2){int iVar1;ssize_t sVar2;long in_FS_OFFSET;char local_19;int local_18;int local_14;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_18 = 0;local_19 = '\0';while ((local_18 < 0x80 && (local_19 != -0x12))) {sVar2 = read(param_1,&local_19,1);if (sVar2 != 1) {iVar1 = -1;goto LAB_001000c1;}local_18 = local_18 + 1;}*param_2 = 0xee;local_18 = 1;local_14 = 1;do {iVar1 = local_18;if (local_14 != 1) break;sVar2 = read(param_1,&local_19,1);local_14 = (int)sVar2;iVar1 = local_18 + 1;param_2[local_18] = local_19;local_18 = iVar1;} while (local_19 != -0x34);LAB_001000c1:if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return iVar1;}/* WARNING: Subroutine does not return */__stack_chk_fail();}