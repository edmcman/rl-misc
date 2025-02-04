#include <stdio.h>

# 1 
void func0(char *param_1){char cVar1;char *pcVar2;char *local_30;char *local_18;char *local_10;pcVar2 = param_1;do {local_30 = pcVar2;pcVar2 = local_30 + 1;local_18 = param_1;local_10 = local_30;} while (*local_30 != '\0');for (; local_10 = local_10 + -1, local_18 < local_10; local_18 = local_18 + 1) {cVar1 = *local_18;*local_18 = *local_10;*local_10 = cVar1;}return;}