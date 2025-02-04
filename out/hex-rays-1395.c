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
#include "defs.h"
int  func0(struct termios termios_p)
{
termios_p.c_lflag &= 0xFFFFFFF5;
termios_p.c_cc[6] = 1;
termios_p.c_cc[5] = 0;
return tcsetattr(0, 2, &termios_p);
}