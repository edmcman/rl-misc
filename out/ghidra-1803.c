
















# 1 
char * func0(char *param_1,int param_2,int *param_3){char *local_10;for (local_10 = param_1 + (long)param_2 + -1;((param_1 < local_10 && (*local_10 != '/')) && (*local_10 != '/')); local_10 = local_10 + -1){}*param_3 = (int)local_10 - (int)param_1;if (((local_10 == param_1) && (*local_10 != '/')) && (*local_10 != '/')) {*param_3 = 1;param_1 = ".";}else if (*param_3 == 0) {*param_3 = 1;param_1 = "/";}return param_1;}