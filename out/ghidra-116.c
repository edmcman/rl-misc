#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdio.h>

#include <errno.h>

#include <sys/file.h>

#include <unistd.h>

#include <time.h>

#include <stdlib.h>

# 1 
char * func0(char *param_1,int *param_2,char param_3,char param_4){char *pcVar1;char *local_18;char *local_10;*param_2 = 0;local_18 = param_1;while( true ) {if (param_4 == *local_18) {*param_2 = *param_2 + 1;local_10 = local_18 + 1;if (*local_10 != '\0') {*local_18 = *local_10;pcVar1 = local_18 + 2;local_10 = local_18;while (local_18 = pcVar1, local_10 = local_10 + 1, *local_18 != '\0') {if (param_4 == *local_18) {*param_2 = *param_2 + 1;local_18 = local_18 + 1;if (*local_18 == '\0') {return local_18;}*local_10 = *local_18;}else {if (param_3 == *local_18) {return local_10;}*local_10 = *local_18;}pcVar1 = local_18 + 1;}}return local_10;}if (*local_18 == '\0') {return local_18;}if (param_3 == *local_18) break;local_18 = local_18 + 1;}return local_18;}