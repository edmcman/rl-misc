#include <stdio.h>

#include <stdarg.h>

#include <unistd.h>

#include <sys/socket.h>

#include <sys/types.h>

#include <sys/shm.h>

#include <stdlib.h>

#include <netdb.h>

#include <errno.h>

#include <string.h>

# 1 
char * func0(char *param_1){char cVar1;char *pcVar2;char *local_18;char *local_10;for (local_18 = param_1; pcVar2 = param_1, local_10 = local_18, *local_18 != '\0';local_18 = local_18 + 1) {}while ((local_18 = pcVar2, local_10 = local_10 + -1, *local_18 != '\0' && (local_18 < local_10))){cVar1 = *local_18;*local_18 = *local_10;*local_10 = cVar1;pcVar2 = local_18 + 1;}return param_1;}