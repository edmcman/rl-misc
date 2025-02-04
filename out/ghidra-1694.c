#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include <sys/time.h>

#include <netdb.h>

#include <string.h>

#include <sys/ioctl.h>

#include <net/if.h>

#include <sys/utsname.h>

#include <netinet/in.h>

#include <unistd.h>

#include <errno.h>

#include <semaphore.h>

#include <malloc.h>

#include <time.h>

# 1 
void func0(char *param_1,byte *param_2){*param_2 = (byte)param_1[1] >> 4 | *param_1 << 2;param_2[1] = param_1[1] << 4 | (byte)param_1[2] >> 2;param_2[2] = param_1[2] << 6 | param_1[3];return;}