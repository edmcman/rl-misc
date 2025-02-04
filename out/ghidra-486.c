#include <elf.h>

#include <errno.h>

#include <fcntl.h>

#include <stdarg.h>

#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

# 1 
void func0(uint param_1,uint *param_2,char param_3){if (param_3 != '\0') {param_1 = param_1 >> 0x18 | param_1 << 0x18 | (param_1 & 0xff00) << 8 | param_1 >> 8 & 0xff00;}*param_2 = param_1;return;}