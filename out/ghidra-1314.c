#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <errno.h>

#include <getopt.h>

#include <limits.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <sys/select.h>

#include <unistd.h>

# 1 
char * func0(undefined *param_1,char *param_2){char *pcVar1;char cVar2;char *local_28;char *local_20;*param_1 = 0x27;local_28 = param_2;local_20 = param_1 + 1;do {cVar2 = *local_28;if (cVar2 == '\'') {*local_20 = '\'';pcVar1 = local_20 + 2;local_20[1] = '\\';local_20 = local_20 + 3;*pcVar1 = '\'';}else if (cVar2 == '\0') {*local_20 = '\'';local_20[1] = '\0';return local_20 + 1;}*local_20 = cVar2;local_28 = local_28 + 1;local_20 = local_20 + 1;} while( true );}