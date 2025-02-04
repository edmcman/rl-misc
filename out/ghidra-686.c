#include <stdio.h>

#include <linux/fb.h>

#include <string.h>

#include <sys/ioctl.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <net/if.h>

#include <unistd.h>

#include <pthread.h>

#include <semaphore.h>

#include <netdb.h>

#include <fcntl.h>

#include <dirent.h>

#include <sys/select.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <sys/stat.h>

#include <termios.h>

#include <stdlib.h>

#include <linux/types.h>

#include <linux/fb.h>

#include <errno.h>

#include <sys/mman.h>

# 1 
void func0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7){*(undefined4 *)(param_1 + 0x68) = param_2;*(undefined4 *)(param_1 + 0x6c) = param_3;*(undefined4 *)(param_1 + 0x78) = param_4;*(undefined4 *)(param_1 + 0x70) = param_5;*(undefined4 *)(param_1 + 0x74) = param_6;*(undefined4 *)(param_1 + 0x7c) = param_7;*(undefined4 *)(param_1 + 0x54) = 0;return;}