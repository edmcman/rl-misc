#include <ctype.h>

#include <errno.h>

#include <malloc.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/syscall.h>

#include <unistd.h>

#include <signal.h>

# 1 
void func0(char *param_1,int param_2,int param_3){char *pcVar1;char cVar2;char *local_40;int local_30;char *local_28;char *local_20;char *local_18;ulong local_10;local_10 = (ulong)param_3;local_30 = 10;if ((param_2 == 100) && (param_3 < 0)) {*param_1 = '-';local_40 = param_1 + 1;local_10 = (ulong)-param_3;pcVar1 = param_1 + 1;}else {local_40 = param_1;if (param_2 == 0x78) {local_30 = 0x10;pcVar1 = param_1;}else {pcVar1 = param_1;if (param_2 == 0x6f) {local_30 = 8;pcVar1 = param_1;}}}do {local_28 = pcVar1;cVar2 = (char)(local_10 % (ulong)(long)local_30);if ((uint)(local_10 % (ulong)(long)local_30) < 10) {cVar2 = cVar2 + '0';}else {cVar2 = cVar2 + 'W';}*local_28 = cVar2;local_10 = local_10 / (ulong)(long)local_30;pcVar1 = local_28 + 1;} while (local_10 != 0);local_28[1] = '\0';local_18 = local_28;for (local_20 = local_40; local_20 < local_18; local_20 = local_20 + 1) {cVar2 = *local_20;*local_20 = *local_18;*local_18 = cVar2;local_18 = local_18 + -1;}return;}