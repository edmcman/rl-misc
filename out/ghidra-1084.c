#include <stdint.h>

# 1 
char * func0(char *param_1,char param_2){char *pcVar1;char *local_20;pcVar1 = param_1;local_20 = param_1;if (param_1 == (char *)0x0) {if (DAT_001000a8 == (char *)0x0) {return (char *)0x0;}local_20 = DAT_001000a8;pcVar1 = DAT_001000a8;}while( true ) {DAT_001000a8 = pcVar1;pcVar1 = DAT_001000a8;if (*local_20 == '\0') {DAT_001000a8 = (char *)0x0;return pcVar1;}if (param_2 == *local_20) break;local_20 = local_20 + 1;}*local_20 = '\0';pcVar1 = DAT_001000a8;DAT_001000a8 = local_20 + 1;return pcVar1;}