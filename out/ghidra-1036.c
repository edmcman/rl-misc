
# 1 
char * func0(char *param_1){char cVar1;char *pcVar2;char *local_18;char *local_10;pcVar2 = param_1;do {local_10 = pcVar2;local_18 = param_1;pcVar2 = local_10 + 1;} while (*local_10 != '\0');while (local_10 = local_10 + -1, local_18 < local_10) {cVar1 = *local_18;*local_18 = *local_10;*local_10 = cVar1;local_18 = local_18 + 1;}return param_1;}