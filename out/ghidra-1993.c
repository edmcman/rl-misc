#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
undefined8 func0(char *param_1,undefined4 *param_2){char *pcVar1;*param_2 = 1;pcVar1 = strchr(param_1,0x31);if ((pcVar1 == (char *)0x0) && (pcVar1 = strchr(param_1,0x32), pcVar1 == (char *)0x0)) {return 0;}return 1;}