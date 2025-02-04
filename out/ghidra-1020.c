#include <string.h>

#include <stdlib.h>

# 1 
long func0(char *param_1,char *param_2){char *local_20;char *local_18;char *local_10;local_20 = param_1;for (local_18 = param_1; local_10 = param_2, *local_18 != '\0'; local_18 = local_18 + 1) {for (; (*local_10 != '\0' && (*local_10 != *local_18)); local_10 = local_10 + 1) {}if (*local_10 == '\0') {*local_20 = *local_18;local_20 = local_20 + 1;}}*local_20 = '\0';return (long)local_20 - (long)param_1;}