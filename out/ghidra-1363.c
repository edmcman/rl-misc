#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <dirent.h>

#include <search.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
char * func0(undefined *param_1,char *param_2){char *pcVar1;char *local_20;char *local_10;local_20 = param_1 + 1;*param_1 = 0x22;for (local_10 = param_2; *local_10 != '\0'; local_10 = local_10 + 1) {if (*local_10 == '\"') {pcVar1 = local_20 + 1;*local_20 = '\\';local_20 = local_20 + 2;*pcVar1 = '\"';}else if (*local_10 == '\\') {*local_20 = '\\';local_20[1] = '\\';local_20 = local_20 + 2;}else {*local_20 = *local_10;local_20 = local_20 + 1;}}*local_20 = '\"';local_20[1] = ' ';return local_20 + 2;}