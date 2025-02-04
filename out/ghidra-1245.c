#include <stddef.h>   //for NULL

# 1 
void func0(char *param_1,char *param_2){char *local_20;char *local_10;local_20 = param_1;local_10 = param_2;while (*local_10 != '\0') {*local_20 = *local_10;local_20 = local_20 + 1;local_10 = local_10 + 1;}*local_20 = '\0';return;}