
# 1 
char * func0(char *param_1,char *param_2){char *local_28;char *local_10;local_28 = param_2;local_10 = param_1;while (*local_28 != '\0') {*local_10 = *local_28;local_28 = local_28 + 1;local_10 = local_10 + 1;}*local_10 = '\0';return param_1;}