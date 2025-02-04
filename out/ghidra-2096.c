#include <stddef.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <limits.h>

#include <unistd.h>

#include <fcntl.h>

#include <dirent.h>

#include <stdio.h>

#include <errno.h>

# 1 
void func0(int param_1,int *param_2){int iVar1;int *piVar2;iVar1 = close(param_1);if (iVar1 < 0) {piVar2 = __errno_location();iVar1 = *piVar2;}else {iVar1 = 0;}*param_2 = iVar1;return;}