#include <stdio.h>

# 1 
void func0(char *param_1,char param_2){char *local_18;char *local_10;local_18 = param_1;while (*local_18 != '\0') {if (param_2 == *local_18) {for (local_10 = local_18; *local_10 != '\0'; local_10 = local_10 + 1) {*local_10 = local_10[1];}}else {local_18 = local_18 + 1;}}return;}