#include <stdio.h>

#include <stdarg.h>

# 1 
char * func0(int param_1,char *param_2,int param_3){char cVar1;int iVar2;long in_FS_OFFSET;int local_5c;char *local_50;char *local_48;char local_38;char local_37 [39];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_48 = &local_38;local_38 = '\0';local_5c = param_1;while (local_50 = param_2, 0 < local_5c) {iVar2 = local_5c % param_3;local_5c = local_5c / param_3;local_48 = local_48 + 1;*local_48 = "0123456789ABCDEF"[iVar2];}do {*local_50 = *local_48;cVar1 = *local_50;local_50 = local_50 + 1;local_48 = local_48 + -1;} while (cVar1 != '\0');if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return param_2;}