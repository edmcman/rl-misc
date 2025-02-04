
# 1 
char * func0(char *param_1,char *param_2){char *local_28;char *local_10;if ((param_1 == (char *)0x0) || (local_28 = param_2, local_10 = param_1, param_2 == (char *)0x0)){param_1 = (char *)0x0;}else {while (*local_28 != '\0') {*local_10 = *local_28;local_28 = local_28 + 1;local_10 = local_10 + 1;}*local_10 = '\0';}return param_1;}