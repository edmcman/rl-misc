
# 1 
char * func0(char *param_1,char *param_2){char *local_18;char *local_10;local_10 = param_1;local_18 = param_2;if (param_2 != (char *)0x0) {while (*local_18 != '\0') {*local_10 = *local_18;local_18 = local_18 + 1;local_10 = local_10 + 1;}*local_10 = '\0';}return local_10;}