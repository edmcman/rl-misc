#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <stdint.h>

# 1 
undefined8 func0(char *param_1,char *param_2,int *param_3){char *pcVar1;char *pcVar2;undefined8 uVar3;char *local_18;char *local_10;*param_3 = 0;local_18 = param_2;local_10 = param_1;if (param_1 == (char *)0x0) {uVar3 = 0xfffffffe;}else {do {pcVar1 = local_10 + 1;pcVar2 = local_18 + 1;if (*local_10 != *local_18) {if ((*param_3 == 0) && (*pcVar1 == '\0')) {return 1;}if ((*pcVar1 == '\0') && (*pcVar2 != '\0')) {return 2;}return 1;}*param_3 = *param_3 + 1;if ((*pcVar1 == '\0') && (*pcVar2 != '\0')) {return 0xfffffffd;}local_18 = pcVar2;local_10 = pcVar1;} while ((*pcVar1 != '\0') || (*pcVar2 != '\0'));uVar3 = 0xffffffff;}return uVar3;}