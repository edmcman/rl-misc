#include <sys/types.h>

#include <stdio.h>

# 1 
long func0(char *param_1,uint param_2){long *plVar1;long in_FS_OFFSET;uint local_44;long *local_38;char *local_30;undefined local_11;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_44 = param_2;plVar1 = (long *)&local_11;do {local_38 = plVar1;*(char *)local_38 = (char)(local_44 % 10) + '0';local_44 = local_44 / 10;plVar1 = (long *)((long)local_38 + -1);local_30 = param_1;} while (local_44 != 0);for (; local_38 < &local_10; local_38 = (long *)((long)local_38 + 1)) {*local_30 = *(char *)local_38;local_30 = local_30 + 1;}*local_30 = '\0';if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return (long)local_30 - (long)param_1;}/* WARNING: Subroutine does not return */__stack_chk_fail();}