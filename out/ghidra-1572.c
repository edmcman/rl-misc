#include <stdint.h>

#include <string.h>

# 1 
char * func0(char *param_1,undefined4 *param_2){char cVar1;if (*param_1 != '0') {*param_2 = 10;return param_1;}cVar1 = param_1[1];if (cVar1 == 'x') {*param_2 = 0x10;LAB_0010007d:param_1 = param_1 + 2;}else {if (cVar1 < 'y') {if (cVar1 == 't') {LAB_00100055:*param_2 = 10;goto LAB_0010007d;}if (cVar1 < 'u') {if (cVar1 == 'n') goto LAB_00100055;if (cVar1 == 'o') {*param_2 = 8;goto LAB_0010007d;}}}*param_2 = 10;}return param_1;}