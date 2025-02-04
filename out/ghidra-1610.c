#include <stdarg.h>

# 1 
int func0(char *param_1,char *param_2){char *local_28;char *local_20;int local_c;local_c = 0;local_28 = param_2;local_20 = param_1;while (*local_28 != '\0') {*local_20 = *local_28;local_c = local_c + 1;local_28 = local_28 + 1;local_20 = local_20 + 1;}return local_c;}