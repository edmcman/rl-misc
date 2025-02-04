






# 1 
char * func0(char *param_1){char cVar1;char *local_10;local_10 = param_1;while (*local_10 != '\0') {if (*local_10 == ' ') {local_10 = local_10 + 1;}else {if ((*local_10 < 'a') || ('z' < *local_10)) {cVar1 = *local_10;}else {cVar1 = *local_10 + -0x20;}*local_10 = cVar1;for (; (*local_10 != ' ' && (*local_10 != '\0')); local_10 = local_10 + 1) {}}}return param_1;}