#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <errno.h>

#include <sys/select.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/ioctl.h>

#include <dirent.h>

#include <fcntl.h>

#include <linux/i2c.h>

#include <linux/i2c-dev.h>

# 1 
void func0(int param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4){long in_FS_OFFSET;undefined4 local_50;int local_4c;undefined2 *local_48;undefined4 local_40;undefined2 local_38;undefined2 local_36;undefined2 local_34;undefined4 *local_30;undefined2 local_28;undefined2 local_26;undefined2 local_24;undefined8 local_20;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_38 = 0x70;local_36 = 0;local_30 = &local_50;local_34 = 1;local_28 = 0x70;local_26 = 1;local_48 = &local_38;local_40 = 2;local_50 = param_2;local_4c = param_1;local_24 = param_3;local_20 = param_4;ioctl(param_1,0x707,&local_48);if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}