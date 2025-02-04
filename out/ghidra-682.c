#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
undefined8 func0(char *param_1,uint param_2,uint *param_3){char *local_20;uint local_c;if (param_1 != (char *)0x0) {local_20 = param_1;for (local_c = 0; local_c < param_2; local_c = local_c + 1) {if (*local_20 == '\0') {if (param_3 != (uint *)0x0) {*param_3 = local_c;}return 0;}local_20 = local_20 + 1;}}return 1;}