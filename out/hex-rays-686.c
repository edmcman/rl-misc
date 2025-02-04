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
#include "defs.h"
_DWORD * func0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
_DWORD *result; // rax

a1[26] = a2;
a1[27] = a3;
a1[30] = a4;
a1[28] = a5;
a1[29] = a6;
a1[31] = a7;
result = a1;
a1[21] = 0;
return result;
}