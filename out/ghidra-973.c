#include <sys/param.h>

#include <sys/time.h>

#include <sys/socket.h>

#include <sys/queue.h>

#include <netinet/in.h>

#include <netinet/in_systm.h>

#include <netinet/if_ether.h>

#include <netinet/ip.h>

#include <netinet/ip6.h>

#include <netinet/udp.h>

#include <arpa/inet.h>

#include <netdb.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <time.h>

#include <poll.h>

#include <errno.h>

#include <err.h>

# 1 
short * func0(short *param_1,undefined4 *param_2){undefined4 local_14;short *local_10;local_10 = (short *)0x0;local_14 = 0;if (*param_1 == 2) {local_10 = param_1 + 2;local_14 = 4;}else if (*param_1 == 10) {local_10 = param_1 + 4;local_14 = 0x10;}if (param_2 != (undefined4 *)0x0) {*param_2 = local_14;}return local_10;}