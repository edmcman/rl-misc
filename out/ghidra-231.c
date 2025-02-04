#include <sys/types.h>

#include <unistd.h>

#include <sys/wait.h>

# 1 
undefined8 func0(byte *param_1,byte param_2){*param_1 = (char)param_2 >> 4 & 0xf;param_1[1] = param_2 & 0xf;if ((char)*param_1 < '\n') {*param_1 = *param_1 + 0x30;}else {*param_1 = *param_1 + 0x37;}if ((char)param_1[1] < '\n') {param_1[1] = param_1[1] + 0x30;}else {param_1[1] = param_1[1] + 0x37;}return 0;}