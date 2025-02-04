#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <errno.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(char *param_1,int *param_2){int iVar1;int *piVar2;iVar1 = chdir(param_1);*param_2 = iVar1;if (*param_2 != 0) {piVar2 = __errno_location();*param_2 = *piVar2;}return;}