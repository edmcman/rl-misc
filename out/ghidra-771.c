#include <ctype.h>

# 1 
char * func0(uint param_1,char *param_2,uint param_3){char cVar1;char *pcVar2;long in_FS_OFFSET;char *local_68;uint local_4c;char *local_48;char local_1a [10];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);pcVar2 = local_1a + 2;local_1a[2] = 0;local_4c = param_1;if (((param_1 != 0x80000000) && ((int)param_1 < 0)) && (param_3 == 10)) {local_4c = -param_1;}do {local_48 = pcVar2;pcVar2 = local_48 + -1;*pcVar2 = "0123456789abcdef"[local_4c % param_3];local_4c = local_4c / param_3;} while (local_4c != 0);local_68 = param_2;if (((int)param_1 < 0) && (local_68 = param_2, param_3 == 10)) {local_48[-2] = '-';local_68 = param_2;pcVar2 = local_48 + -2;}do {local_48 = pcVar2;*local_68 = *local_48;cVar1 = *local_68;local_68 = local_68 + 1;pcVar2 = local_48 + 1;} while (cVar1 != '\0');if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return param_2;}/* WARNING: Subroutine does not return */__stack_chk_fail();}