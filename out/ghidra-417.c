#include <string.h>

# 1 
void func0(char *param_1,long param_2){char *local_20;int local_c;local_20 = param_1;do {if (*local_20 == '\0') {return;}for (local_c = 0; *(char *)(param_2 + local_c) != '\0'; local_c = local_c + 1) {if (*(char *)(param_2 + local_c) == *local_20) {*local_20 = '\0';return;}}local_20 = local_20 + 1;} while( true );}