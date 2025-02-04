#include <math.h>

#include <errno.h>

#include <fcntl.h>

#include <stdio.h>

#include <libgen.h>

#include <limits.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <pthread.h>

#include <stdbool.h>

#include <termios.h>

#include <sys/stat.h>

#include <sys/types.h>

# 1 
void func0(void){undefined8 param_8;cc_t param_12;cc_t param_13;param_8._4_4_ = param_8._4_4_ & 0xfffffff5;param_13 = '\x01';param_12 = '\0';tcsetattr(0,2,(termios *)&stack0x00000008);return;}