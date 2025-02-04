#include <stdio.h>

#include <stdlib.h>

#include <sys/ioctl.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <sys/select.h>

#include <unistd.h>

#include <sys/resource.h>

# 1 
undefined8 func0(long param_1,int param_2){undefined4 local_c;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if (('`' < *(char *)(param_1 + local_c)) && (*(char *)(param_1 + local_c) < '{')) {*(char *)(param_1 + local_c) = *(char *)(param_1 + local_c) + -0x20;}}return 0;}