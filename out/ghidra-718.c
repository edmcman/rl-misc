
# 1 
char * func0(char *param_1,char *param_2){char *local_18;char *local_10;local_18 = param_1;local_10 = param_2;while (*local_10 != '\0') {*local_18 = *local_10;local_18 = local_18 + 1;local_10 = local_10 + 1;}*local_18 = '\0';return param_1;}