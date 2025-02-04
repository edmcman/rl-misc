#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <assert.h>

# 1 
char * func0(char *param_1,char *param_2){char *pcVar1;char *local_20;local_20 = param_1;if (param_1 == (char *)0x0) {local_20 = DAT_00100080;}if (local_20 == (char *)0x0) {local_20 = (char *)0x0;}else {pcVar1 = strpbrk(local_20,param_2);if (pcVar1 == (char *)0x0) {DAT_00100080 = (char *)0x0;}else {*pcVar1 = '\0';DAT_00100080 = pcVar1 + 1;}}return local_20;}