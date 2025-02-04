#include <stdio.h>

# 1 
void func0(char *param_1){char cVar1;char *local_20;char *local_10;for (local_10 = param_1; local_20 = param_1, *local_10 != '\0'; local_10 = local_10 + 1) {}while (local_10 = local_10 + -1, local_20 < local_10) {cVar1 = *local_20;*local_20 = *local_10;*local_10 = cVar1;local_20 = local_20 + 1;}return;}