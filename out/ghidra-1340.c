#include <stdlib.h>

#include <stdint.h>

#include <stdio.h>

#include <stdbool.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
ulong func0(void *param_1,int param_2,int param_3){ulong uVar1;uVar1 = read(param_2,param_1,(long)param_3);if ((int)uVar1 == 0) {uVar1 = 0;}else {uVar1 = uVar1 & 0xffffffff;}return uVar1;}