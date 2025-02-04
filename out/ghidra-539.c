
# 1 
char * func0(char *param_1,char *param_2){char *pcVar1;do {pcVar1 = param_1;*pcVar1 = *param_2;param_1 = pcVar1 + 1;param_2 = param_2 + 1;} while (*pcVar1 != '\0');return pcVar1;}