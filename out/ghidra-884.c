#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <arpa/inet.h>

#include <time.h>

#include <ctype.h>

#include <glob.h>

#include <assert.h>

#include <inttypes.h>

#include <unistd.h>

#include <stdio.h>

#include <dirent.h>

#include <sys/stat.h>

#include <stdlib.h>

# 1 
void func0(char *param_1,char param_2){char *local_18;char *local_10;local_10 = param_1;for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {*local_10 = *local_18;if (param_2 != *local_10) {local_10 = local_10 + 1;}}*local_10 = '\0';return;}