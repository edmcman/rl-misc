#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <errno.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

#include <time.h>

#include <dirent.h>

# 1 
int func0(char *param_1,char *param_2,int param_3){int local_1c;char *local_18;char *local_10;local_18 = param_2;local_10 = param_1;for (local_1c = 0; (*local_18 != '\0' && (local_1c < param_3)); local_1c = local_1c + 1) {*local_10 = *local_18;local_18 = local_18 + 1;local_10 = local_10 + 1;}*local_10 = '\0';return local_1c;}