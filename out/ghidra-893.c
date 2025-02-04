#include <string.h>

#include <stdlib.h>

# 1 
void func0(char *param_1,char *param_2){char *pcVar1;char *local_20;char *local_10;local_20 = param_1;local_10 = param_1;while (*local_10 != '\0') {pcVar1 = strchr(param_2,(int)*local_10);if (pcVar1 == (char *)0x0) {*local_20 = *local_10;local_20 = local_20 + 1;local_10 = local_10 + 1;}else {local_10 = local_10 + 1;}}*local_20 = '\0';return;}