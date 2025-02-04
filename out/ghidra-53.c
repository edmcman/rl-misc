
# 1 
char * func0(char *param_1,char *param_2){long lVar1;*param_1 = *param_2;if (*param_2 != '\0') {lVar1 = func0(param_1 + 1,param_2 + 1);param_1 = (char *)(lVar1 + -1);}return param_1;}