#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/time.h>

# 1 
void func0(int param_1,int *param_2,int *param_3,int *param_4){*param_4 = param_1 / 0xe10;*param_3 = (param_1 % 0xe10) / 0x3c;*param_2 = (param_1 % 0xe10) % 0x3c;return;}