#include <stdio.h>

#include <fcntl.h>

#include <time.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <strings.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/ioctl.h>

#include <sys/select.h>

#include <sys/syslog.h>

#include <sys/resource.h>

#include <termios.h>

# 1 
undefined8 func0(uint *param_1,uint param_2,uint param_3){*param_1 = ~param_2 & *param_1;*param_1 = *param_1 ^ param_3;return 0;}