#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
void func0(char *param_1){char *local_10;for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {if (*local_10 == 'U') {*local_10 = 'T';}else if (*local_10 == 'u') {*local_10 = 't';}}return;}