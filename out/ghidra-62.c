#include <stdio.h>

#include <stdlib.h>																								// per la malloc

#include <string.h>																								// per manipolare stringhe

#include <fcntl.h>																								// per fcntl

#include <sys/socket.h>

# 1 
undefined8 func0(char *param_1,char param_2,char param_3){undefined8 uVar1;undefined8 local_10;if (param_2 == param_3) {uVar1 = 0;}else {local_10 = strchr(param_1,(int)param_2);if (local_10 == (char *)0x0) {uVar1 = 0;}else {for (; local_10 != (char *)0x0; local_10 = strchr(local_10,(int)param_2)) {*local_10 = param_3;}uVar1 = 1;}}return uVar1;}