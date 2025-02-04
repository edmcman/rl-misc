#include <sys/cdefs.h>

#include <stddef.h>

# 1 
long func0(char *param_1,char param_2,ulong param_3){ulong local_30;char *local_20;long local_10;local_10 = 0;local_20 = param_1;for (local_30 = param_3; (*local_20 != '\0' && (1 < local_30)); local_30 = local_30 - 1) {*local_20 = param_2;local_10 = local_10 + 1;local_20 = local_20 + 1;}*local_20 = '\0';return local_10 + 1;}