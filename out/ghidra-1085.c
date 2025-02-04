#include <stdlib.h>

# 1 
int func0(int *param_1,char *param_2){long in_FS_OFFSET;int local_24;int *local_20;undefined4 **local_18;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_18 = &local_20;local_20 = &local_24;local_24 = (*param_2 + -0x60) % 0x1a;*param_2 = (char)local_24 + 'a';*param_1 = *param_1 + 1;if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return *param_1;}