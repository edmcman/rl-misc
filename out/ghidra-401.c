#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

# 1 
void func0(char *param_1){char *local_10;local_10 = param_1;while (*local_10 != '\0') {*local_10 = local_10[1];if (*local_10 != '\0') {local_10 = local_10 + 1;}}return;}