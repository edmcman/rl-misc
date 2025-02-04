#include <unistd.h>

#include <stdlib.h>

#include <stdarg.h>

#include <stdio.h>

#include <string.h>

#include <syslog.h>

#include <limits.h>

#include <errno.h>

#include <ctype.h>

#include <fcntl.h>

#include <netdb.h>

#include <dirent.h>

#include <time.h>

#include <sys/param.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/wait.h>

#include <sys/socket.h>

#include <netinet/in.h>

#include <netinet/tcp.h>

#include <arpa/inet.h>

#include <getopt.h>

# 1 
char * func0(char *param_1,char *param_2){char cVar1;char *local_28;char *local_20;local_28 = param_2;local_20 = param_1;do {*local_20 = *local_28;cVar1 = *local_20;local_28 = local_28 + 1;local_20 = local_20 + 1;} while (cVar1 != '\0');return param_1;}